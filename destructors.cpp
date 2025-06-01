#include <iostream>
using namespace std;
class Base{
    public:
        Base() { cout << "Constructor called" << endl; } // Constructor
        virtual ~Base() { cout << "Destructor called" << endl; } // Destructor making it virtual 
        // to ensure the correct destructor is called for derived classes
};
class Derived : public Base{
    public:
        Derived() { cout << "Derived Constructor called" << endl; } // Derived Constructor
        ~Derived() { cout << "Derived Destructor called" << endl; } // Derived Destructor
};
int main(){
    Derived d;
    Base *b = new Derived();
    delete b; // Calls the destructor of Derived first, then Base
    return 0; // Program ends
}