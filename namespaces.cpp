#include <iostream>
using namespace std; // Using the standard namespace for convenience
namespace first {
    void display() {
        cout << "This is the first namespace." << endl;
    }
}
namespace second {
    void display() {
        cout << "This is the second namespace." << endl;
    }
}
int main() {
    first::display();  // Calls the display function from the first namespace
    second::display(); // Calls the display function from the second namespace

    // Using a using directive to bring all names from the first namespace into scope
    using namespace first;
    display(); // Calls the display function from the first namespace again
    using namespace second;
    display(); // Calls the display function from the second namespace again
    //this line will cause an error if we try to use both namespaces at the same time
    return 0;
}