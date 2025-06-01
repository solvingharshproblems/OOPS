/*
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // writing to a file in C++
    ofstream outfile("streams.txt",ios::app); // it will open a pre-existing file or create a new one with the same name
    // ios::app is used to append data to the file
    outfile<<endl<<"Sicko Mode-Travis Scott"<<endl;
    outfile<<"Highest in the Room-Travis Scott"<<endl;
    outfile<<"Goosebumps-Travis Scott"<<endl;
    outfile.close(); // close the file after writing to it
    return 0;
}
*/
// reading from a file in C++
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream infile("streams.txt"); // open the file for reading
    //Method 2
    //infile.open("streams.txt");// open the file for reading
    if(!infile){
        cout<< "Error opening file!" << endl;
    }
    string content;
    int x;
    infile>>content; // read the content of the file
    infile>>x; // read an integer from the file
    cout<<content; // print the content to the console
    cout<<endl;
    if(infile.eof()){
        cout<< "End of file reached." << endl;
    }
    infile.close(); // close the file after reading from it
    return 0;
}
*/
//Serialization 
/*
#include <iostream>
#include <fstream>
using namespace std;
class Student {
    public:
        string name;
        int age;
        float gpa;
        friend ofstream& operator<<(ofstream& ofs, const Student& s) { //overloaded operator for writing to file
            ofs << s.name << endl;
            ofs << s.age << endl;
            ofs << s.gpa << endl;
            return ofs;
        }
        friend ifstream& operator>>(ifstream& ifs, Student& s) { //overloaded operator for reading from file
            getline(ifs, s.name);
            ifs >> s.age;
            ifs >> s.gpa;
            ifs.ignore(); // to ignore the newline character after reading gpa
            return ifs;
        }
};
int main(){
    Student s1;
    s1.name="Harsh";
    s1.age=18;
    s1.gpa=8.7;
    ofstream outfile("student.txt", ios::trunc); // open the file for writing, truncating it if it exists
    outfile<<s1; // use the overloaded operator to write the student object to the file
    outfile.close(); // close the file after writing
    return 0;
}
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    cout<<set(10)<<"Hello";
}