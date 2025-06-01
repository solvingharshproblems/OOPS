//Decimal to Binary
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int ans=0;
//     for(int i=0;n!=0;i++){
//         int bit=n&1;
//         ans=(bit*pow(10,i))+ans;
//         n=n>>1;
//     }
//     cout<<"The answer is: "<<ans<<endl;
// }
//Binary to Decimal
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=0;
    for(int i=0;n!=0;i++){
        int digit=n%10;
        if(digit==1){
            ans=(pow(2,i))+ans;
        }
        n=n/10;
    }
    cout<<"The answer is: "<<ans<<endl;
}