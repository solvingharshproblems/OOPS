#include <iostream>
using namespace std;
// int add(int x,int y){
//     return x+y;
// }
// int sub(int x,int y){
//     return x-y;
// }
// int mul(int x,int y){
//     return x*y;
// }
// int division(int x,int y){
//     return x/y;
// }
// int mod(int x,int y){
//     return x%y;
// }
// int main(){
//     int a=10,b=20,c;
//     c=add(a,b);
//     cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     c=sub(a,b);
//     cout<<"The difference of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     c=mul(a,b);
//     cout<<"The product of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     c=division(a,b);
//     cout<<"The division of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     c=mod(a,b);
//     cout<<"The modulus of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     return 0;
// }
// template <class T> // function template
// T add(T x,T y){ // function template to run for all data types
//     return x+y;
// }
// int main(){
//     int a=10,b=20,c;
//     c=add(a,b);
//     cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c<<endl;
//     float x=10.5,y=20.5,z;
//     z=add(x,y);
//     cout<<"The sum of "<<x<<" and "<<y<<" is: "<<z<<endl;
//     return 0;
// }
// int swap(int *x,int *y){ // swap function can be done using pointers by call by address rather than call by value
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a=10,b=20;
//     cout<<"Before swapping: "<<a<<" "<<b<<endl;
//     swap(&a,&b);
//     cout<<"After swapping: "<<a<<" "<<b<<endl;
//     return 0;
// }
// for more simplier version we use call by reference method
// void swap(int &x,int &y){ // use it only when you want to change the actual parameters 
//     int temp;
//     temp=x; // do not write any complex mechanism in function when using call by reference
//     x=y; // avoid using loops in these functions
//     y=temp;
// }
// int main(){
//     int a=10,b=20;
//     cout<<"The value of a and b before swapping:"<<endl;
//     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
//     swap(a,b);
//     cout<<"The Value of a and b after swapping:"<<endl;
//     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
// }
//we can also return a function by its address
// int *fun(){
//     int *p=new int[5];
//     for(int i=0;i<5;i++){
//         p[i]=5*i;
//     }
//     return p;
// }
// int main(){
//     int *q=fun();
//     cout<<q<<endl;
//     for(int i=0;i<5;i++){
//         cout<<q[i]<<endl;
//     }
// }
// int g=0; // global variable: it is declared outside the function
// // it is accessible in all the functions
// // it remains in memory until the program ends
// void fun(){
//     static int g=0; // static variable: it is declared inside the function
//     // it is initialized only once and retains its value between function calls
//     int a=5; // local variable: it is declared inside the function
//     // it is accessible only in the function
//     // it is destroyed when the function ends
//     // it is stored in stack memory
//     g=g+a;
//     cout<<g<<endl; // prints 5
// }
// int main(){
//     g=15;
//     fun();
//     g++;
//     cout<<g<<endl;
// }
// Recursive Function:
// void fun(int n){
//     if(n>0){
//         cout<<n<<endl;
//         fun(n-1); // function calling itself
//     }
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     fun(n);
//     return 0;
// }
// Linear Search using Functions:
// int Search(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int size,key;
//     cout<<"Enter the size of the array: ";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the key to be searched: ";
//     cin>>key;
//     int index = Search(arr, size, key);
//     if(index != -1){
//         cout<<"Element found at index: "<<index<<endl;
//     } else {
//         cout<<"Element not found in the array."<<endl;
//     }
//     return 0;
// }
// Pointer to a Function:
int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
} 
int main(){
    int (*ptr)(int, int); // pointer to a function
    ptr = max; // assigning function address to pointer
    cout << "Max: " << ptr(10, 20) << endl; // calling function using pointer
    ptr = min; // assigning function address to pointer
    cout << "Min: " << ptr(10, 20) << endl; // calling function using pointer
    return 0;
}