#include<iostream>
using namespace std;

class induk {
    public: 
        string brand = "Ford";
        void kelakson(){
            cout << "Tuuut , Tuut" << endl;
        }
};
class anak : public induk{
    public : 
        string model = "Mustang";
        string indukKamuSiapa(){
            return brand ;
        };
};

int main(){
    anak gt;
    gt.kelakson();
    cout << "Siapa nama induk dari varaibel gt : " << gt.indukKamuSiapa()  << endl;
    return 0;
}