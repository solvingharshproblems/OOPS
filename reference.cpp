#include <iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x; // y is a reference to x
    cout<<&y<<endl; // prints 10
    y=20; // changes the value of x
    cout<<&x<<endl; // prints 20
}