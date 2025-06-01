//First Question: Product of digits value - Sum of digits value
// #include <iostream>
// using namespace std;
// int main(){
//     int n,digit1,digit2,digit3;
//     cout<<"Enter a number: ";
//     cin>>n;
//     digit1=(n/100);
//     cout<<"The first digit is: "<<digit1<<endl;
//     digit2=(n/10)%10;
//     cout<<"The second digit is: "<<digit2<<endl;
//     digit3=n%10;
//     cout<<"The third digit is: "<<digit3<<endl;
//     int product=digit1*digit2*digit3;
//     cout<<"The product of the digits is: "<<product<<endl;
//     int sum=digit1+digit2+digit3;
//     cout<<"The sum of the digits is: "<<sum<<endl;
//     int result=product-sum;
//     cout<<"The result is: "<<result<<endl;
// }
#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}