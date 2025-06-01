//Arrays
// Maximum and Minimum value of array
// #include <iostream>
// using namespace std;
// void printArray(int arr[],int size){
//     cout<<"Printing The Array......"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void Maximumvalue(int arr[],int size){
//     int maxVal=arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxVal){
//             maxVal=arr[i];
//         }
//     }
//     cout<<"The maximum value in array is: "<<maxVal<<endl;
// }
// void Minimumvalue(int arr[],int size){
//     int minVal=arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]<minVal){
//             minVal=arr[i];
//         }
//     }
//     cout<<"The minimum value in array is: "<<minVal<<endl;
// }
// int main(){
//     // int a[15]={1};
//     // int n=15;
//     // printArray(a,n);
//     // int b[5]={2};
//     // int m=5;
//     // printArray(b,m);
//     // int x=sizeof(b)/sizeof(int); // Size of array if unknown
//     // cout<<x<<endl;
//     // char ch[5]={'a','b','c','r','p'};
//     // cout<<ch[3]<<endl;
//     // printArray(ch,5);
//     int a[4]={4,12,8,10};
//     int n=4;
//     printArray(a,n);
//     Maximumvalue(a,4);
//     Minimumvalue(a,4);
//     return 0;
// }
// Sum of elements of Array
// #include <iostream>
// using namespace std;
// void Printing(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void Sum(int arr[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     cout<<"The sum of the elements of the array is: "<<sum<<endl;
// }
// int main(){
//     int arr[5]={2,7,1,-4,11};
//     int n=5;
//     Printing(arr,n);
//     Sum(arr,n);
//     return 0;
// }
// Linear Search
// #include <iostream>
// using namespace std;
// void Printing(int arr[0],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// } 
// bool search(int arr[0],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int n=6;
//     cout<<"Enter the element to search for: "<<endl;
//     int key;
//     cin>>key;
//     bool found = search(arr,n,key);
//     if(found) cout<<"Key is present."<<endl;
//     else cout<<"Key is absent."<<endl;
//     return 0;
// }
//Reversing an Array
#include <iostream>
using namespace std;
void Printing(int arr[0],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Reverse(int arr[0],int size){
    int end=size-1;
    for(int i=0;i<end;i++,end--){
        swap(arr[i],arr[end]);
    }
}
int main(){
    int a[6]={1,2,3,4,5,6};
    int n=6;
    cout<<"The Array is: "<<endl;
    Printing(a,n);
    Reverse(a,n);
    cout<<"The reversed array is: "<<endl;
    Printing(a,n);
    return 0;
}