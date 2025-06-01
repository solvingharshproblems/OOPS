#include <iostream>
using namespace std;
class shape{
    public:
        virtual void draw()=0;
        virtual void area()=0;
        virtual ~shape() { // virtual destructor to ensure proper cleanup of derived classes
            cout<<"Shape destructor called"<<endl;
        }
};
class circle:public shape{
    public:
        void draw(){ // overriding the draw function of shape class
            cout<<"Drawing Circle"<<endl;
        }
        void area(){ // overriding the area function of shape class
            cout<<"Calculating area of Circle"<<endl;
        }
};
class rectangle:public shape{
    public:
        void draw(){ // overriding the draw function of shape class
            cout<<"Drawing Rectangle"<<endl;
        }
        void area(){ // overriding the area function of shape class
            cout<<"Calculating area of Rectangle"<<endl;
        }
};
int main(){
    shape *s1=new circle();
    s1->draw();
    s1->area();
    delete s1; // free the allocated memory
    s1=nullptr; // set pointer to null to avoid dangling pointer
    shape *s2=new rectangle();
    s2->draw();
    s2->area();
    delete s2; // free the allocated memory
    s2=nullptr; // set pointer to null to avoid dangling pointer
    return 0;
}