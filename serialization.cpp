#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Item{
    public:
        string name;
        int price;
        int quantity;
        friend ofstream& operator<<(ofstream &ofs,const Item &i){
            ofs<<i.name<<endl;
            ofs<<i.price<<endl;
            ofs<<i.quantity<<endl;
            return ofs;
        }
        friend ifstream& operator>>(ifstream& ifs,Item& i){
            getline(ifs,i.name);
            ifs>>i.price;
            ifs>>i.quantity;
            ifs.ignore(); // to ignore the newline character after reading quantity
            return ifs;
        }
};
int main(){
    Item item1;
    item1.name="Laptop";
    item1.price=100000;
    item1.quantity=1;
    ofstream ofs("item.txt");
    ofs<<item1; // write item1 to file
    ofs.close(); // close the file after writing
    return 0;
}