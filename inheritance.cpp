// Method 1: Deriving a class from another class using inheritance
/*
#include <iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    public:
        rectangle(int l=0, int b=0){ // parameterized constructor first this class's constructor will be executed 
            length = l;
            breadth = b;
        }
        rectangle(const rectangle &rect){ // copy constructor
            length = rect.length;
            breadth = rect.breadth;
        }
        void setLength(int l){
            if(l > 0) length = l;
            else length = 0;
        }
        void setBreadth(int b){
            if(b > 0) breadth = b;
            else breadth = 0;
        }
        int getLength() const {
            return length;
        }
        int getBreadth() const {
            return breadth;
        }
        int area() const {
            return length * breadth; // calculate area of rectangle
        }
};
class cuboid:public rectangle{
    public:
        int height;
        cuboid(int l=0,int b=0,int h=0):rectangle(l, b),height(h) { // parameterized constructor then this class's constructor will be executed
            if(h < 0) height = 0; // ensure height is non-negative
        }
        int volume() const {
            return area() * height; // calculate volume of cuboid
        }
};
int main(){
    cuboid c1,c2,c3;
    c1.setLength(5);
    c1.setBreadth(3);
    c1.height = 4; // setting height for cuboid
    cout<<"The volume of the cuboid is: "<<c1.volume()<<endl; // prints volume of cuboid
}
*/
// Method 2: Using objects of the parents class using isA and hasA relationship
#include <iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    public:
        rectangle(int l=0, int b=0){ // parameterized constructor first this class's constructor will be executed 
            length = l;
            breadth = b;
        }
        rectangle(const rectangle &rect){ // copy constructor
            length = rect.length;
            breadth = rect.breadth;
        }
        void setLength(int l){
            if(l > 0) length = l;
            else length = 0;
        }
        void setBreadth(int b){
            if(b > 0) breadth = b;
            else breadth = 0;
        }
        int getLength() const {
            return length;
        }
        int getBreadth() const {
            return breadth;
        }
        int area() const {
            return length * breadth; // calculate area of rectangle
        }
};
class cuboid{
    private:
        rectangle r; // hasA relationship
        int height;
    public:
        cuboid(int l=0,int b=0,int h=0):r(l, b),height(h) { // parameterized constructor then this class's constructor will be executed
            if(h < 0) height = 0; // ensure height is non-negative
        }
        int volume() const {
            return r.area() * height; // calculate volume of cuboid
        }
};