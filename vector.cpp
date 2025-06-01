#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Vector {
    public:
        string name;
        int price;
        int quantity;
        friend ostream& operator<<(ostream& ofs,const Vector& v){
            ofs<<v.name<<endl;
            ofs<<v.price<<endl;
            ofs<<v.quantity<<endl;
            return ofs;
        }
        friend istream& operator>>(istream& ifs, Vector& v){
            getline(ifs,v.name);
            ifs>>v.price;
            ifs>>v.quantity;
            ifs.ignore(); // Ignore the newline character after reading price and quantity
            return ifs;
        }
};
int main(){
    vector<Vector> v={
        {"Apple", 100, 10},
        {"Banana", 50, 20},
        {"Cherry", 200, 15}
    };
    // Writing to a file
    ofstream outfile("vector.txt", ios::trunc);
    if(!outfile){
        cout << "Error opening file for writing." << endl;
        return 1;
    }
    for(const auto& item : v){
        outfile << item; // Printing each Vector object to the file
    }
    //reading from a file
    ifstream infile("vector.txt");
    if(!infile){
        cout << "Error opening file for reading." << endl;
        return 1;
    }
    vector<Vector> readVector;
    Vector temp;
    while(infile >> temp){ // Reading each Vector object from the file
        readVector.push_back(temp);
    }
    infile.close(); // Close the file after reading
    // Output the read data to verify
    for(const auto& item : readVector){
        cout << "Name: " << item.name << ", Price: " << item.price << ", Quantity: " << item.quantity << endl;
    }
    // Close the output file
    outfile.close(); // Close the file after writing
}
