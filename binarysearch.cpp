#include <iostream>
using namespace std;
// BINARY SEARCH
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(auto i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements are: ";
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    int key;
    cout<<endl<<"Enter the key to search: ";
    cin>>key;
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Key found: "<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        cout<<"Key not found"<<endl;
    }
    return 0;
    
}