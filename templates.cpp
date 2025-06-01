/*
#include <iostream>
using namespace std;
template <class T>
void add(T x,T y){
    cout<<x+y<<endl;
}
int main(){
    add(10,20); // Calls add<int>(int, int)
    add(10.5,20.5); // Calls add<double>(double, double)
    add(string("Hello, "),string( "World!")); // Calls add<const char*>(const char*, const char*)
    return 0;
}
*/
#include <iostream>
using namespace std;
template <class T>
class stack{
    private:
        T s[100];
        int top;
    public:
        void push(T x);
        T pop();
};
void stack<T>::push(T x){
    s[++top] = x;
}
T stack<T>::pop(){
    return s[top--];
}
int main(){
    stack<int> s1;
    s1.push(10);
    cout << "Popped from int stack: " << s1.pop() << endl;

    stack<double> s2;
    s2.push(10.5);
    cout << "Popped from double stack: " << s2.pop() << endl;

    stack<string> s3;
    s3.push("Hello");
    cout << "Popped from string stack: " << s3.pop() << endl;

    return 0; 
}
