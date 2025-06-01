#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    // char s[]="Hello World";// to store string in stack
    // //char *p="Hello World";// to store string in heap;
    // string m="Hello World"; // to store string in heap but with more features and no warnings and no need to delete
    // cout<<s<<endl; // prints Hello World
    // cout<<m<<endl; // prints Hello World
    // int size;
    // cout<<"Enter size of character array: ";
    // cin>>size;
    // cin.ignore(); // to ignore the newline character left in the buffer
    string s;
    cout<<"Enter the string: ";
    getline(cin,s); // to take input of string with spaces
    //char t[20];
    //cout<<"Enter 2nd string: ";
    //cin.getline(t,20); // to take input of string with spaces
    //strncat(s,t,6); // to concatenate two strings
    //strcpy(s,t);
    //strncpy(s,t); // to copy string t to string s
    //strchr(s,'o'); // to find first occurrence of character in string
    //strrchr(s,'o'); // to find last occurrence of character in string
    //strcmp(s,t); // to compare two strings
    //long int x=strtol(s,nullptr,10); // to convert string to long int
    //float y=strtof(t,nullptr); // to convert string to float
    //cout<<s.length()<<endl; // prints 0
    //cout<<y<<endl; // prints 0
    //cout<<s<<endl; // prints Hello World
    //cout<<"The length of the string is: "<<strlen(s)<<endl; 
    //s.substr(0,5); // to get substring of string
    //s.find('o'); // to find first occurrence of character in string
    //s.find_last_of('o'); // to find last occurrence of character in string
    //s.erase(0,5); // to erase first 5 characters of string
    //s.insert(0,"Hello"); // to insert string at the beginning
    //s.replace(0,5,"Hello"); // to replace first 5 characters of string with Hello
    //s.clear(); // to clear the string
    //s.resize(10); // to resize the string
    //s.resize(5,'a'); // to resize the string and fill with a
    //s.find_first_of('o'); // to find first occurrence of character in string
    // for(auto it=s.rbegin();it!=s.rend();it++){
    //     cout<<*it; // prints the string in reverse order
    // }
    // cout<<"the lower case of the given string is: "; 
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<char(tolower(*it)); // prints the string in lower case
    // }
    // int words=0,vowels=0,consonants=0;
    // bool isWord=false; // to check if the character is a word
    // for(char i:s){
    //     i=tolower(i); // to convert the character to lower case
    //     if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
    //         vowels++; // to count vowels
    //     }
    //     else if(i>='a'&&i<='z'){
    //         consonants++; // to check if the character is a consonant
    //     }
    //     if(isalpha(i)){
    //         if(!isWord){ // to check if the character is a word
    //             words++; // to count words
    //             isWord=true; 
    //         }
    //     }
    //     else{
    //         isWord=false; // to check if the character is not a word
    //     }   
    // }
    // cout<<"The number of vowels in the string is: "<<vowels<<endl; // prints 0
    // cout<<"The number of consonants in the string is: "<<consonants<<endl; // prints 0
    // cout<<"The number of words in the string is: "<<words<<endl; // prints 0
    // string t="";
    // bool isPalindrome=true; // to check if the string is a palindrome   
    // for (int i = 0, j = t.size() - 1; i < j; i++, j--) { // running from 0 to size-1 or size/2 of the string
    //     if (t[i] != t[j]) { // to check if the character is not equal
    //         isPalindrome = false; // to check if the string is not a palindrome
    //         break;
    //     }
    // }
    // if (isPalindrome) {
    //     cout << "It is a palindrome." << endl;
    // } else {
    //     cout << "It is not a palindrome." << endl;
    // }
    for(auto i:s){
        if(i=='@'){
            cout<<"The username is: "<<s.substr(0,s.find('@'))<<endl; // prints the username
        }
    }
    //cout<<"Username not found"<<endl; // prints username not found
}