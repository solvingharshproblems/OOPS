// Constants, Manipulators, Operator Precedence
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int a=34;//you cannot change value of 'a' now
    int a =20, b=500,c=1000;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    //precedence is all about order of solving
    //associativity the steps of solving
    return 0;
}