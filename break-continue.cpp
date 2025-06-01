//Break-Continue
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=0;i<=a;i++){
        if(a%2==0){
            cout<<"Okay";
            continue;//lets the loop run
        }
        //cout<<i<<endl;
        else{
            cout<<"Not Okay";
            break;//do not lets the loop run
        }
        //cout<<i<<endl;
    }   

    return 0;
} 