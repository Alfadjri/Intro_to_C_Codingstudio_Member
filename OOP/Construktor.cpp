#include<iostream>
using namespace std;

class mobil{
    private:
        string name_mobil;
        string brand;
    public:
        mobil(string nama_mobil , string brand_mobil){
            name_mobil = nama_mobil;
            brand = brand_mobil;
        };
        void display(){
            cout << "Tolong ambilkan mobil yang saya suruh" << endl;
            cout << "Siap tuan saya ambilkan mobil nya !" << endl;
            cout << "dengan nama mobil : " << name_mobil << endl;
            cout << "dengan brand : " << brand << endl;
        };
};



int main(){
    mobil babu_saya("Ujang" , "Toyota");
    babu_saya.display();
    return 0;
}