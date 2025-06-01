// Class and function names: The class is named `Student` and it has methods to set the name, calculate total marks, and determine the grade.
#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int rollNo;
        float marks1,marks2,marks3;
    public:
        void setName(string n){
            name = n;
        }
        float totalMarks(float total){
            return marks1 + marks2 + marks3;
        }
        char grade(int total){
            if(total >= 90){
                return 'A';
            } else if(total >= 80){
                return 'B';
            } else if(total >= 70){
                return 'C';
            } else if(total >= 60){
                return 'D';
            } else {
                return 'F';
            }
        }

};
int main(){
    Student s;
    string name;
    cout<<"Enter student name: ";
    cin>>name;
    s.setName(name);
    int rollNo;
    cout<<"Enter student roll number: "<<endl;
    cin>>rollNo;
    float marks1, marks2, marks3;
    cout<<"Enter marks for subject 1: "<<endl;
    cin>>marks1;
    cout<<"Enter marks for subject 2: "<<endl;
    cin>>marks2;
    cout<<"Enter marks for subject 3: "<<endl;
    cin>>marks3;
    s.totalMarks(marks1 + marks2 + marks3);
    float total = marks1 + marks2 + marks3;
    char g = s.grade(total);
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Grade: "<<g<<endl;  
}