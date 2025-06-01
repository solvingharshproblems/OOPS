//Do-While Loop (Pyramid Pattern)
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int i=1;
    do{
        int j=1;
        do{
            cout<<" ";
            j++;
        }while(j<=a-i);
        j=1;
        do{
            cout<<"*";
            j++;
        }while(j<=2*i-1);
        cout<<endl;
        i++;
    }while(i<=a);
    return 0;
}