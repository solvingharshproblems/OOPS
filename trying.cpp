#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<count;
            count++;
        }
        // for(int j=0; j<i; j++)
        // {
        //     cout<<"* ";
        // }
        
        cout<<endl;
    }
    return 0;
}