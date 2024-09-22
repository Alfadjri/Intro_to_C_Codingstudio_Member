#include<iostream>
using namespace std;
class Mobil{
    private: // encapsulation menjaga nilai model
        string brand;
        string model = "Sport"; // ini yang di sebut enkapsulasi biar gak di ganti
    public:
        void setup_brand(string nama_brand){  // set nilai paramater 
            brand = nama_brand;
        };
        
        string get_barnd(){
            return brand;
        };

        void display(){
            cout << "ini sorum mobil : " << get_barnd() << endl;
            cout << "yang menjual kusus tipe mobil yang di jual : " << model << endl; 
        };
};
int main(){
    Mobil sorum;
    sorum.setup_brand("Toyota");
    sorum.display();
    cout << endl;
    sorum.setup_brand("Suzuki");
    sorum.display();
    return 0;
}