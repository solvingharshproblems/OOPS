#include<iostream>
//LINEAR SEARCH
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(auto i=0; i<n; i++)
    {
        cin>>arr[i];
    }
//     cout<<"The elements are: ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
    // {
    //     cin>>x;
    // }
    // {
    //     cin>>arr[i];
    // }
    cout<<"The elements are: ";
    for(auto x:arr)
    {
        //++x;
        cout<<x<<" ";
    }
    // {
    //     cout<<arr[i]<<" ";
    // }
    int key;
    cout<<endl<<"Enter the key to search: ";
    cin>>key;
    for(auto x:arr)
    {
        if(x==key)
        {
            cout<<"Key found: "<<x<<endl;
            break;
        }
        // else{
        //     cout<<"Key not found: "<<x<<endl;
        // }
    }
}