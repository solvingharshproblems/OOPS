//Feature 1: Auto Type Deduction
#include <iostream>
using namespace std;
int main(){
    auto x = 10; // Using auto to deduce the type of x
    auto y = 20.5; // Using auto to deduce the type of y
    auto sum = x + y; // Using auto to deduce the type of sum
    cout << "Sum: " << sum << endl; // Outputting the sum
    return 0;
}
//Feature 2: Final Keyword
#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() final { // Using final to prevent overriding in derived classes
        cout << "Base class display function." << endl;
    }
};
class Derived : public Base {
public:
    // This will cause a compilation error if uncommented, as display() is final in Base
    // void display() override {
    //     cout << "Derived class display function." << endl;
    // }
};
int main() {
    Base b;
    b.display(); // Calling the display function from Base class
    // Derived d; // Uncommenting this will cause an error if we try to override display()
    return 0;
}
// Feature 3: Lambda Expressions
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    // Using a lambda expression to print each number in the vector
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl; // Outputting a newline after printing all numbers
    return 0;
}
// Feature 4: Smart Pointers
//Method 1: Using unique_ptr
#include <iostream>
using namespace std;
class Rectangle{
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area(){
        return width * height; // Function to calculate area of the rectangle
    }
};
void func(){
    unique_ptr<Rectangle> ptr(new Rectangle(10,20));
    cout<<ptr->area()<<endl; // Using unique_ptr to manage Rectangle object
    // No need to delete ptr, it will be automatically deleted when it goes out of scope
}
int main(){
    func(); // Calling the function that uses unique_ptr
    // After this point, ptr will be automatically deleted
    return 0;
}
//Method 2: Using shared_ptr
#include <iostream>
#include <memory>
using namespace std;
class Circle {
public:
    int radius;
    Circle(int r) : radius(r) {}
    double area() {
        return 3.14 * radius * radius; // Function to calculate area of the circle
    }
};
void func() {
    shared_ptr<Circle> ptr(new Circle(5)); // Using shared_ptr to manage Circle object
    cout << "Area of circle: " << ptr->area() << endl; // Accessing area function through shared_ptr
    // No need to delete ptr, it will be automatically deleted when the last reference goes out of scope
}
int main() {
    func(); // Calling the function that uses shared_ptr
    // After this point, ptr will be automatically deleted when the last reference goes out of scope
    return 0;
}
//Method 3: Using weak_ptr
#include <iostream>
#include <memory>
using namespace std;
class Node {
    public:
        int data;
        shared_ptr<Node> next; // Using shared_ptr for the next node
        Node(int d) : data(d), next(nullptr) {}
}; 
void createLinkedList() {
    shared_ptr<Node> head(new Node(1)); // Creating the head of the linked list
    head->next = shared_ptr<Node>(new Node(2)); // Creating the next node
    head->next->next = shared_ptr<Node>(new Node(3)); // Creating another node
    weak_ptr<Node> weakPtr = head; // Creating a weak_ptr to the head node

    cout << "Linked List: ";
    shared_ptr<Node> current = head; // Using shared_ptr to traverse the linked list
    while (current) {
        cout << current->data << " "; // Outputting the data of each node
        current = current->next; // Moving to the next node
    }
    cout << endl;

    if (auto sp = weakPtr.lock()) { // Checking if weakPtr is still valid
        cout << "Weak pointer is valid, data: " << sp->data << endl; // Outputting data if valid
    } else {
        cout << "Weak pointer is no longer valid." << endl; // Outputting message if not valid
    }
}
int main() {
    createLinkedList(); // Calling the function to create and display the linked list
    return 0; // Returning 0 to indicate successful execution
}
// Feature 5: Ellipses
#include <iostream>
using namespace std;
int sum(int n,...){
    va_list list; // Initializing a variable argument list
    va_start(list, n); // Starting the variable argument list
    int total = 0; // Variable to hold the sum
    for(int i = 0; i < n; i++){
        total += va_arg(list, int); // Accessing each argument in the list
    }
    va_end(list); // Ending the variable argument list
    return total; // Returning the total sum
} 
int main(){
    cout << "Sum of 3, 5, and 7: " << sum(3, 3, 5, 7) << endl; // Calling sum with 3 arguments
    cout << "Sum of 4, 1, 2, 3, and 4: " << sum(4, 1, 2, 3, 4) << endl; // Calling sum with 4 arguments
    return 0; // Returning 0 to indicate successful execution
}