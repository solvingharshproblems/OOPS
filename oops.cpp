#include <iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    public:
        // rectangle(){ // default constructor
        //     length=0;
        //     breadth=0;
        // }
        // NOTE: Functions inside classes are known as inline functions
        void setLength(int l){ // this property function is known as mutator
        // it allows the to write the value of data
            if(l>0){
                length=l;
            }
            else{
                length=0;
            }
        }
        void setBreadth(int b){ // same as above
            if(b>0){
                breadth=b;
            }
            else{
                breadth=0;
            }
        }
        int getLength(){ // this property function is known as accessor
            // it allows the to read the value of data 
            return length;
        }
        int getBreadth(){ // same as above
            return breadth;
        }
        int area(){ // this property function is known as facilitators
            return length * breadth; // calculate area of rectangle
        }
        int perimeter(){ // same as above
            return 2 * (length + breadth); // calculate perimeter of rectangle
        }
        rectangle(int l=0, int b=0){ 
            setLength(l); // parameterized constructor which will work as default constructor if no parameters are passed
            setBreadth(b);
        }
        rectangle(const rectangle &rect){ // copy constructor 
            length = rect.length; // copy the values of length and breadth from the object passed
            breadth = rect.breadth;
        }
        // rectangle(rectangle &rect)// deep copy constructor
        // {
        //     length = rect.length; // copy the values of length and breadth from the object passed
        //     breadth = rect.breadth;
        //     int *ptr = new int[2]; // dynamically allocate memory for the object
        //     for(int i=0;i<2;i++){
        //         ptr[i]=0; // initialize the memory with 0
        //     }
            
        // }
        /*Note: If there is any dynamic memory allocation done by the object,
         then the copy constructor may not create a new memory for it, it may pointing on the same memory.
         In that case we need a deep copy constructor means we need to define a new pointer with "new command."*/
        int isSquare(){ // this property function is known as inspectors or enquiry function
            // check if the rectangle is a square
            return length == breadth; // return 1 if it is a square, else return 0
        }
        ~rectangle(){ // this property function is known as destructor
            // this will be called when the object is destroyed
            // we can use it to free the memory allocated by the object
            cout<<"Destructor called"<<endl; // to check if the destructor is called
        }
        // Note: Destructor is called automatically when the object goes out of scope or is deleted
        // It is used to free the memory allocated by the object.
        // It is called only once for each object.
        // It is not called for the copy constructor.
}; 
// Commenting this global variable as it is already defined in the class and used in main function
/* int rectangle::perimeter(){ scope resolution operator "::" to call function outside class as a global variable
    return 2 * (length + breadth); // calculate perimeter of rectangle
}  this will give an error as the function is already defined in the class */
int main() {
    rectangle r1; // non parameterized constructor
    //rectangle r1(10,20); // parameterized constructor
    rectangle r2(r1 ); // copy constructor
    //rectangle r1(); // non-parameterized constructor same as line 44
    r1.setLength(10);// dot operator to access the object and store in stack
    r1.setBreadth(10); // create an object of rectangle class
    //or we can use pointer to create an object and store in heap memory
    rectangle *p=new rectangle(); // create an object of rectangle class in heap memory
    p->setLength(15); // arrow or -> operator to access the pointer to an object and store in  heap
    p->setBreadth(10);
    cout<<r1.area()<<endl;
    cout<<p->area()<<endl; // call member function to display area
    delete p; // delete the object created in heap memory
    p=nullptr; // set the pointer to null to avoid dangling pointer
    return 0; 
}