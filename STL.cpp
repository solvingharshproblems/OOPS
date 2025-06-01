#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,50};
    v.push_back(60); // Adding an element to the end of the vector
    v.pop_back(); // Removing the last element from the vector
    //Method 1 for printing elements in a vector
    // for(int x:v){
    //     cout<<x<<" "; // Outputting each element in the vector
    // }
    //Method 2 for printing elements in a vector
    vector<int>::iterator it; // Creating an iterator for the vector
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" "; // Dereferencing the iterator to get the value
    }
}