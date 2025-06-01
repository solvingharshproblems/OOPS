#include <iostream>
#define PI 3.14159// Define a preprocessor constant for PI
#define output cout // Define a preprocessor alias for cout
#define square(x) ((x) * (x)) // Define a preprocessor macro for squaring a number
#define MSG(x) #x
#ifndef MSG //if it is not defined, define it
#define MSG(x) #x // Define a preprocessor macro to convert a message to a string
#endif //otherwise, use the existing definition
using namespace std;
int main(){
    const int radius = 5; // Constant radius
    double area = PI * radius * radius; // Calculate area using the preprocessor constant
    output << "Area of the circle with radius " << radius << " is: " << area << endl;  
    output << "Square of " << radius << " is: " << square(radius) << endl; // Use the preprocessor macro to calculate square
    output << "Message: " << MSG(Hello World!) << endl; // Use the preprocessor macro to convert a message to a string
    return 0;
}