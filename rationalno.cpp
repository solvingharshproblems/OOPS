#include <iostream>
using namespace std;
class Rationalno{
    private:
        int numerator;
        int denominator;
    public:
        void setP(int P){
            numerator = P;
        }
        void setQ(int Q){
            if(Q != 0){
                denominator = Q;
            } else {
                cout << "Denominator cannot be zero." << endl;
                denominator = 1; // Default value to avoid division by zero
            }
        }
        int getP() const {
            return numerator;
        }
        int getQ() const {
            return denominator;
        }
        Rationalno operator+(Rationalno x){
            Rationalno temp;
            temp.setP(numerator * x.denominator + x.numerator * denominator);
            temp.setQ(denominator * x.denominator);
            return temp;
        }
    friend ostream& operator<<(ostream &o, Rationalno &r);
};
ostream& operator<<(ostream &o, Rationalno &r){
    o<<r.getP()<<r.getQ();
    return o;
}
int main(){
    Rationalno r1,r2,r3;
    r1.setP(3);
    r1.setQ(2);
    r2.setP(5);
    r2.setQ(4);
    cout<<r1.getP()+r2.getP()<<" / "<<r1.getQ()+r2.getQ()<<endl; // This will print the sum of the two rational numbers
}