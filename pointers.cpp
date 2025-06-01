//Pointers is a datatype that stores address of other data types
#include <iostream>
using namespace std;
int main(){
    //for single variable
    // int a=3;
    // int *b;
    // b=&a;
    // cout<<*b;
    // delete b; to delete pointer
    // for array
    // int *p;
    // p=new int[5];
    // p[0]=1;
    // p[1]=2;
    // p[2]=3;
    // p[3]=4;
    // p[4]=5;
    // for(auto i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    // delete p; //to delete pointer
    // p=nullptr; //to make pointer null
    // int size;
    // cout<<"Enter size of array: ";
    // cin>>size;  
    // int A[size];
    // cout<<sizeof(A)<<endl;// will return size of array
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int A[size];;
    int *p;
    p=new int[size];
    cout<<sizeof(p)<<endl; // will return size of pointer
    int *q=&A[3];
    cout<<q<<endl; // will return value of 4th element of array
    int d=p-q;
    cout<<d<<endl; // will return difference of two pointers
    return 0;
}