#include <iostream>
using namespace std;
/*
class parent{
    public:
        virtual void show(){ // virtual function to achieve runtime polymorphism
            cout<<"This is parent class"<<endl;
        }
};
class child:public parent{
    public:
        void show(){ // overriding the show function of parent class
            cout<<"This is child class"<<endl;
        }
};
int main(){
    parent *p=new child(); // pointer of parent class pointing to child class object
    p->show(); // calling the show function of child class using parent class pointer
    delete p; // free the allocated memory
    p=nullptr; // set pointer to null to avoid dangling pointer
}
*/
// Runtime Polymorphism
class car{ // this class becomes abstract class as it has pure virtual functions
    public:
        virtual void start()=0;/*{ PURE VIRTUAL FUNCTION by assigning function=0
            cout<<"Car is starting"<<endl; // these lines doesnt matter btw lol 
        } */
        virtual void drive(){ // virtual function to achieve runtime polymorphism
            cout<<"Car is driving"<<endl;
        }
        virtual void stop()=0; /* {
            cout<<"Car is stopping"<<endl;
        } */
       virtual ~car() { // virtual destructor to ensure proper cleanup of derived classes
            cout<<"Car destructor called"<<endl;
        }
};
class audi:public car{ 
    public:
        void start(){ // overriding the start function of car class
            cout<<"Audi is starting"<<endl;
        }
        void drive(){ // overriding the drive function of car class
            cout<<"Audi is driving"<<endl;
        }
        void stop(){ // overriding the stop function of car class
            cout<<"Audi is stopping"<<endl;
        }
};
class bmw:public car{
    public:
        void start(){ // overriding the start function of car class
            cout<<"BMW is starting"<<endl;
        }
        void drive(){ // overriding the drive function of car class
            cout<<"BMW is driving"<<endl;
        }
        void stop(){ // overriding the stop function of car class
            cout<<"BMW is stopping"<<endl;
        }
};
int main(){
    car *c1=new audi(); // pointer of car class pointing to audi class object
    c1->start(); // calling the start function of audi class using car class pointer
    c1->drive(); // calling the drive function of audi class using car class pointer
    c1->stop(); // calling the stop function of audi class using car class pointer
    delete c1; // free the allocated memory
    c1=nullptr; // set pointer to null to avoid dangling pointer
    car *c2=new bmw(); // pointer of car class pointing to bmw class object
    c2->start(); // calling the start fun ction of bmw class using car class pointer
    c2->drive(); // calling the drive function of bmw class using car class pointer 
    c2->stop(); // calling the stop function of bmw class using car class pointer
    delete c2; // free the allocated memory
    c2=nullptr; // set pointer to null to avoid dangling pointer
    return 0; // return 0 to indicate successful execution
}