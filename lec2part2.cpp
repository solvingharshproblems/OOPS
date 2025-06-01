//Switch-Case Statement
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    switch(a%2){
        case 0:
            cout<<"It is an even number.";
            break;
        case 1:
            cout<<"It is an odd number.";
            break;
        default: cout<<"Input a non zero value.";
    }
    return 0;
}