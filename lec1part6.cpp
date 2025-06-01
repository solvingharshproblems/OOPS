//Reference Variable & Typecasting
#include <iostream>
using namespace std;
int c=40;
int main()
{
    //Built-In Datatypes
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The value of c is: "<<c<<endl;
    // cout<<"The global c is: "<<::c;//:: aka scope resolution operator
    // float d=34.4f;//f indicates float
    // long double e=34.4l;//l indicates long double
    // cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
    //Reference Variable:
    // float x=50.5;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //Typecasting
    int a =45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    //OR
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    //OR
    cout<<"The value of b is "<<int(b)<<endl;
    int c=int(b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
}
