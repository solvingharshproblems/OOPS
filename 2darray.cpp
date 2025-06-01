#include <iostream>
using namespace std;
// 2D ARRAY
int main(){
    int n, m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter "<<n*m<<" elements: ";
    for(auto i=0; i<n; i++){
        for(auto j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The elements are: "<<endl;
    
    for(auto i=0; i<n; i++)
    {
        for(auto j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        
    
    return 0;
}