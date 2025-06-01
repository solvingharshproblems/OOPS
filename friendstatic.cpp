//friend class
/*
#include <iostream>
using namespace std;
class Me{
    private:
        int x=1;
        friend class Friend; // Declare Friend as a friend class
};
class Friend{
    public:
        Me m;
        void display(){
            cout<<m.x;
        }
};
int main(){
    Friend f;
    f.display();
    return 0;
}
*/
//static member function 
/*
#include <iostream>
using namespace std;
class Me{
    private:
        static int x; // Static member variable
    public:
        static void display(){ // Static member function
            cout << "Static member function called. Value of x: " << x << endl;
        }
};
int Me::x = 10; // Definition and initialization of static member variable
int main(){
    Me m1,m2; // Create two objects of class Me
    m1.display(); // Call static member function using object
    m2.display(); // Call static member function using another object
    Me::display(); // Call static member function using class name
    return 0;
} 
*/
//Inner Classes
#include <iostream>
using namespace std;
class Outer {
    public:
        class Inner { // Inner class: this class can access only static members of outer class
            public: // no private or protected members can be accessed from this class
                void display() {
                    cout << "Inner class method called." << endl;
                }
        };
};
int main() {
    Outer::Inner inner; // Create an object of the inner class
    inner.display(); // Call method of the inner class
    return 0;
}