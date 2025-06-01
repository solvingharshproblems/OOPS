//While Loop (Pyramid Pattern)
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}