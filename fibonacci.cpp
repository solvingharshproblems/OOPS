//Fibonacci
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int a=0,b=1,sum;
//     for(int i=1;i<=n;i++){
//         int next=a+b;
//         a=b;
//         b=next;
//         cout<<next<<endl;
//     }
//     // cout<<endl;
// }
//Prime Number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             cout<<"It is not a prime number.";
//         }
//         else{
//             cout<<"It is a prime number.";
//         }
//     }
// }
#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}