//Functions
// Power of a
// #include <iostream>
// using namespace std;
// int power(int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans = ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>> a >> b ;
//     int answer=power(a,b);
//     cout<<answer;
//     return 0;
// }
// Even Odd
// #include <iostream>
// using namespace std;
// bool isEven(int a){
//     if (a&1) return 0;
//     else return 1;
// }
// int main(){
//     int num;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Number is even.";
//     }
//     else{
//         cout<<"Number is odd.";
//     }
//     return 0;
// }
// nCr Factorial
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int num=factorial(n);
//     int denom=factorial(r)*factorial(n-r);
//     int ans=num/denom;
//     return ans;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int result=nCr(n,r);
//     cout<<result;
//     return 0;
// }
// Sum of numbers
// #include <iostream>
// using namespace std;
// int adding(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     int n,sum;
//     cin>>n;
//     int result=adding(n);
//     cout<<result;
//     return 0; 
// }
// Prime Numbers
#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int result=isPrime(n);
    if(isPrime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
    return 0;
}