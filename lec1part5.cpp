// Header Files & Operators
#include <iostream>
//#include <this.h> user defined header file
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"Operators in C++:"<<endl;//endl = \n
    //cout<<"Types of Operators in C++:"<<endl;
    cout<<"Arithmetic Operators:"<<endl;
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is: "<<a-b<<endl;
    cout<<"The value of a * b is: "<<a*b<<endl;
    cout<<"The value of a / b is: "<<a/b<<endl;
    cout<<"The value of a % b is: "<<a%b<<endl;
    cout<<"The value of a ++ is: "<<a++<<endl;
    cout<<"The value of a -- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<"Comparision Operators:"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"Logical Operators:"<<endl;
    cout<<"The value of this logical AND operator (a==b) && (a<b) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator (a==b) && (a<b) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is:"<<(!(a==b))<<endl;

    return 0;
}
