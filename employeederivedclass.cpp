#include <iostream>
using namespace std;
class Employee{
    private:
        string name;
        int ID;
        int salary;
    public:
        void setName (string n){
            name=n;
        }
        void setID(int id){
            ID=id;
        }
        void setSalary(int s){
            salary=s;
        }
        string getName(){
            return name;
        }
        int getID(){
            return ID;
        }
        int getSalary(){
            return salary;
        }
};
class FullTimeEmployee:public Employee{
    private:
        int bonus;
    public:
        void setBonus(int b){
            bonus=b;
        }
        int getBonus(){
            return bonus;
        }
        int totalSalary(){
            return getSalary() + getBonus();
        }
};
class PartTimeEmployee:public Employee{
    private:
        int DailyWage;
    public:
        void setDailyWage(int dw){
            DailyWage=dw;
        }
        int getDailyWage(){
            return DailyWage;
        }
        int totalSalary(int daysWorked){
            return getDailyWage() * daysWorked;
        }
};
int main(){
    FullTimeEmployee x;
    x.setName("Alex Periera");
    x.setID(64);
    x.setSalary(50000);
    x.setBonus(10000);
    cout<<"Full Time Employee Details:"<<endl;
    cout<<"Name: "<<x.getName()<<endl;
    cout<<"ID: "<<x.getID()<<endl;
    cout<<"Salary: "<<x.getSalary()<<endl;
    cout<<"Bonus: "<<x.getBonus()<<endl;
    cout<<"Total Salary: "<<x.totalSalary()<<endl;
    PartTimeEmployee y;
    y.setName("Jon Jones");
    y.setID(65);
    y.setSalary(20000);
    y.setDailyWage(500);
    int daysWorked;
    cout<<"Enter number of days worked: ";
    cin>>daysWorked;
    cout<<"Part Time Employee Details:"<<endl;
    cout<<"Name: "<<y.getName()<<endl;
    cout<<"ID: "<<y.getID()<<endl;
    cout<<"Salary: "<<y.getSalary()<<endl;
    cout<<"Daily Wage: "<<y.getDailyWage()<<endl;
    cout<<"Total Salary for "<<daysWorked<<" days worked: "<<y.totalSalary(daysWorked)<<endl;
    return 0;
}