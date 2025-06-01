//Exception Handling Constructors
/*
#include <iostream>
using namespace std;
int division(int x,int y){
    if (y == 0) {
        throw "Division by zero error";
    }
    return x / y;
}
int main(){
    int a,b,c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    try {
        c = division(a, b);
        cout << "Result: " << c << endl;
    } 
    catch(const char* e){
        cout << "Error: "<<e<< endl;
    }
    
    return 0;
}
*/
#include <iostream>
using namespace std;
class StackOverflow:exception{};
class StackUnderflow:exception{};
class Stack {
    private:
        int top;
        int capacity;
        int* stack;

    public:
        Stack(int size) {
            capacity = size;
            top = -1;
            stack = new int[capacity];
        }

        ~Stack() {
            delete[] stack;
        }

        void push(int value) {
            if (top == capacity - 1) {
                throw StackOverflow();
            }
            stack[++top] = value;
        }

        int pop() {
            if (top == -1) {
                throw StackUnderflow();
            }
            return stack[top--];
        }
};
int main() {
    Stack s(5);
    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60); // This will cause StackOverflow
    } catch (StackOverflow& e) {
        cout << "Stack Overflow Error" << endl;
    }

}