#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    getline(cin,s); // Taking input of string with spaces
    for(int i=s.length()-1; i>=0; i--){ // Looping through the string in reverse order
        cout<<s[i];
    }
}