#include <iostream>
using namespace std;
/* class Complex {
    private:
        int real;
        int imag;
    public:
        void setReal(int r) { // Setter for real part
            real = r; // Assigning value to the real part
        }
        void setImag(int i) { // Setter for imaginary part
            imag = i; // Assigning value to the imaginary part
        }
        int getReal() { // Getter for real part
            return real; // Returning the value of the real part
        }
        int getImag() { // Getter for imaginary part
            return imag; // Returning the value of the imaginary part
        }
        Complex operator+(Complex x){ // Overloading the + operator to add two Complex numbers
            Complex temp;
            temp.real = real + x.real; // Adding real parts
            temp.imag = imag + x.imag; // Adding imaginary parts
            return temp; // Returning the result
        }
};
int main() {
    Complex c1,c2,c3; // Creating three Complex objects
    c1.setReal(5); // Assigning values to the real and imaginary parts of c
    c1.setImag(3); // Assigning values to the real and imaginary parts of c1
    c2.setReal(2); // Assigning values to the real and imaginary parts of c2
    c2.setImag(4); // Assigning values to the real and imaginary parts of c2
    c3=c2+c1; // Using the overloaded + operator to add c1 and c2
    cout << "Sum of Complex numbers: " << c3.getReal()<< " + " << c3.getImag() << "i" << endl; // Displaying the result
    return 0;
} */
// Now overloading operators using different method known as friend function 
/* class Complex{
    private:
        int real;
        int imag;
    public:
        void setReal(int r){
            real=r;
        }
        void setImag(int i){
            imag=i;
        }
        int getReal(){
            return real;
        }
        int getImag(){
            return imag;
        }
    friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2){
    Complex t;
    t.real=c1.real+c2.real; // Adding real parts
    t.imag=c1.imag+c2.imag; // Adding imaginary parts
    return t; // Returning the result
}
int main(){
    Complex c1,c2,c3;
    c1.setReal(5); // Assigning values to the real and imaginary parts of c1
    c1.setImag(3); // Assigning values to the real and imaginary parts of c1
    c2.setReal(2); // Assigning values to the real and imaginary parts of c2
    c2.setImag(4); // Assigning values to the real and imaginary parts of c2
    c3=c2+c1; // Using the overloaded + operator to add c1 and c2
    cout << "Sum of Complex numbers: " << c3.getReal() << " + " << c3.getImag() << "i" << endl; // Displaying the result
    return 0; // Returning 0 to indicate successful execution
} */
class Complex {
    private:
        int real;
        int imag;
    public:
        Complex(int r = 0, int i = 0) : real(r), imag(i) {} // Constructor with default values
        Complex operator+(const Complex& c) { // Overloading + operator
            return Complex(real + c.real, imag + c.imag); // Returning the sum of two complex numbers
        }
    friend ostream & operator<<(ostream &o,Complex &c); // Friend function to overload << operator
};
ostream & operator<<(ostream &o, Complex &c) { // Overloading << operator
    o << c.real << " + " << c.imag << "i"; // Displaying the complex number in a+bi format
    return o; // Returning the output stream
}
int main(){
    Complex c1(5, 3), c2(2, 4); // Creating two complex numbers
    Complex c3 = c1 + c2; // Using the overloaded + operator to add c1 and c2
    cout << "Sum of Complex numbers: "; 
    cout<<c3; // Displaying the result using the overloaded << operator
    return 0; // Returning 0 to indicate successful execution
}