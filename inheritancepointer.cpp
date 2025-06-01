#include <iostream>
using namespace std;
class Base {
    public:
        void func1(){}
        void func2(){}
        void func3(){}
};
class Derived : public Base {
    public:
        void func4(){}
        void func5(){}
};
int main(){
    Base *ptr = new Derived(); // Pointer of base class pointing to derived class object
    ptr->func1(); // Accessing base class function
    ptr->func2(); // Accessing base class function
    ptr->func3(); // Accessing base class function
    // ptr->func4(); // This will give an error because func4 is not a member of Base class
    // ptr->func5(); // This will give an error because func5 is not a member of Base class
    delete ptr; // Free the allocated memory
    ptr=nullptr; // Set pointer to null to avoid dangling pointer
    return 0;
}