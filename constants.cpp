#include <iostream>
using namespace std;
int main(){
    const int a = 10; // Constant integer
    a++; // Error: cannot modify a constant variable
    const double b = 20.5; // Constant double
    b += 5.0; // Error: cannot modify a constant variable
    const char* c = "Hello"; // Constant string
    c[0] = 'h'; // Error: cannot modify a constant string
    cout << "Constant integer: " << a << endl;
    cout << "Constant double: " << b << endl;
    cout << "Constant string: " << c << endl;
    const int *ptr = &a; // Pointer to constant integer
    cout << "Pointer to constant integer: " << *ptr << endl; // Valid: dereferencing a pointer to a constant variable
    int *const Ptr = &a; // constant Pointer to an integer
    cout << "Pointer to constant integer: " << *constPtr << endl; // Valid: dereferencing a pointer to a constant variable
    const int *const ConstPtr = &a; // constant Pointer to a constant integer
    cout << "Pointer to constant integer: " << *ConstPtr << endl; // Valid: dereferencing a pointer to a constant variable
    // Note: The above code will not compile due to attempts to modify constant variables.
    return 0;
}