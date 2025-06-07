//Project 1: Banking System
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;
#define MIN_BALANCE 500 //defining a pre-processor to keep minimum balance as 500
class InsufficientFunds{}; //exceptional handling class 
class Account{ //class for the account stuff
    private:
        long accountNumber;
        string firstName;
        string lastName;
        float balance;
        static long NextAccountNumber;
    public:
        Account(){}
        Account(string fname,string lname,float balance);
        long getAccNo(){return accountNumber;}
        string getFirstName(){return firstName;}
        string getLastName(){return lastName;}
        float getBalance(){return balance;}
        void Deposit(float amount);
        void Withdraw(float amount);
        static void setLastAccountNumber(long accountNumber);
        static long getLastAccountNumber();
        friend ofstream & operator<<(ofstream &ofs,Account &acc);
        friend ifstream & operator>>(ifstream &ifs,Account &acc);
        friend ostream & operator<<(ostream &os,Account &acc);
};
long Account::NextAccountNumber=0; //serializing next account 
class Bank{ //class for bank's provided features
    private:
        map<long,Account> accounts;
    public:
        Bank();
        Account OpenAccount(string fname,string lname,float balance);
        Account BalanceEnquiry(long accountNumber);
        Account Deposit(long accountNumber,float amount);
        Account Withdraw(long accountNumber,float amount);
        void CloseAccount(long accountNumber);
        void ShowAllAccounts();
        ~Bank();
};
int main(){ //main function
    Bank b;
    Account acc;
    int choice;
    string fname,lname;
    long accountNumber;
    float balance;
    float amount;
    cout<<"***Banking System***"<<endl;
    do{ //loop for menu
        cout<<"\n\tSelect one option below ";
        cout<<"\n\t1 Open an Account";
        cout<<"\n\t2 Balance Enquiry";
        cout<<"\n\t3 Deposit";
        cout<<"\n\t4 Withdrawal";
        cout<<"\n\t5 Close an Account";
        cout<<"\n\t6 Show All Accounts";
        cout<<"\n\t7 Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){ //conditional statement according to the user input
            case 1:
                cout<<"Enter First Name: ";
                cin>>fname;
                cout<<"Enter Last Name: ";
                cin>>lname;
                cout<<"Enter initil Balance: ";
                cin>>balance;
                acc=b.OpenAccount(fname,lname,balance);
                cout<<endl<<"Congradulation Account is Created"<<endl;
                cout<<acc;
                break;
            case 2:
                cout<<"Enter Account Number:";
                cin>>accountNumber;
                acc=b.BalanceEnquiry(accountNumber);
                cout<<endl<<"Your Account Details"<<endl;
                cout<<acc;
                break;
            case 3:
                cout<<"Enter Account Number:";
                cin>>accountNumber;
                cout<<"Enter Balance:";
                cin>>amount;
                acc=b.Deposit(accountNumber, amount);
                cout<<endl<<"Amount is Deposited"<<endl;
                cout<<acc;
                break;
            case 4:
                cout<<"Enter Account Number:";
                cin>>accountNumber;
                cout<<"Enter Balance:";
                cin>>amount;
                acc=b.Withdraw(accountNumber, amount);
                cout<<endl<<"Amount Withdrawn"<<endl;
                cout<<acc;
                break;
            case 5:
                cout<<"Enter Account Number:";
                cin>>accountNumber;
                b.CloseAccount(accountNumber);
                cout<<endl<<"Account is Closed"<<endl;
                cout<<acc;
                break;
            case 6:
                b.ShowAllAccounts();
                break;
            case 7:
                break;
            default:
                cout<<"\nEnter corret choice";
                exit(0);
            }
        }
    while(choice!=7);
    return 0;
}
Account::Account(string fname,string lname,float balance){ //constructor using Scope Resolution Operator for account info
    NextAccountNumber++;
    accountNumber=NextAccountNumber;
    firstName=fname;
    lastName=lname;
    this->balance=balance;
}
void Account::Deposit(float amount){ //adds money in balance
    balance+=amount;
}
void Account::Withdraw(float amount){//withdraws money from balance
    if(balance-amount<MIN_BALANCE)
        throw InsufficientFunds();
    balance-=amount;
}
void Account::setLastAccountNumber(long accountNumber){//static method to set last used account number
    NextAccountNumber=accountNumber;
}
long Account::getLastAccountNumber(){//static method to get last used account number
    return NextAccountNumber;
}
ofstream & operator<<(ofstream &ofs,Account &acc){//saving account info in file with operator overloading
    ofs<<acc.accountNumber<<endl;
    ofs<<acc.firstName<<endl;
    ofs<<acc.lastName<<endl;
    ofs<<acc.balance<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Account &acc){//reading account info in file with operator overloading
    ifs>>acc.accountNumber;
    ifs>>acc.firstName;
    ifs>>acc.lastName;
    ifs>>acc.balance;
    return ifs;
}
ostream & operator<<(ostream &os,Account &acc){//printing account info with operator overloading
    os<<"First Name:"<<acc.getFirstName()<<endl;
    os<<"Last Name:"<<acc.getLastName()<<endl;
    os<<"Account Number:"<<acc.getAccNo()<<endl;
    os<<"Balance:"<<acc.getBalance()<<endl;
    return os;
}
Bank::Bank(){//constructor using Scope Resolution Operator for loading already existing accounts from the file
    Account account;
    ifstream infile;
    infile.open("Bank.data");
    if(!infile){
        //cout<<"Error in Opening! File Not Found!!"<<endl;
        return;
    }
    while(!infile.eof()){
        infile>>account;
        accounts.insert(pair<long,Account>(account.getAccNo(),account));
    }
    Account::setLastAccountNumber(account.getAccNo());
    infile.close();
}
Account Bank::OpenAccount(string fname,string lname,float balance){//opens a new account and writes the account info in file
    ofstream outfile;
    Account account(fname,lname,balance);
    accounts.insert(pair<long,Account>(account.getAccNo(),account));
    outfile.open("Bank.data", ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
        outfile<<itr->second;
    }
    outfile.close();
    return account;
}
Account Bank::BalanceEnquiry(long accountNumber){//returns account info
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    return itr->second;
}
Account Bank::Deposit(long accountNumber,float amount){//deposits money
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    itr->second.Deposit(amount);
    return itr->second;
}
Account Bank::Withdraw(long accountNumber,float amount){//withdraws money
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    itr->second.Withdraw(amount);
    return itr->second;
}
void Bank::CloseAccount(long accountNumber){//closes the account
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    cout<<"Account Deleted"<<itr->second;
    accounts.erase(accountNumber);
}
void Bank::ShowAllAccounts(){//shows all accounts present in file
    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
        cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
    }
}
Bank::~Bank(){//destructor using Scope Resolution Operator for saving all the accounts info in the file before ending the program
    ofstream outfile;
    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
        outfile<<itr->second;
    }
    outfile.close();
}
//This was my 1st project, thanks for visiting!