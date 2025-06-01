#include <iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the length of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the "<<n<<" elements: ";
        int avg=0;
        for(auto i=0; i<n; i++)
        {
            cin>>arr[i];
            avg+=arr[i];
        }
        avg=avg/n;
        cout<<"The average of elements in the array is: "<<avg<<endl;

}