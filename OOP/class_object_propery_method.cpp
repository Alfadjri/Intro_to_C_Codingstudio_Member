#include<iostream>
using namespace std;

class Mobil{ // ini di sebut class mobil
    public: // ini propertiy
        string nama_mobil; // ini disebut object
        string warna_mobil; // ini disebut object
        string jenis_mobil; // ini disebut object
    // fungsi ini ada 2 tipe 
    
    int penjumlahan(){ // yang mengeluarkan nilai
        return 1 + 1;
    };
    
    void suara_mobil(){ //  tidak mengeluarkan nilai
        cout << "Fummmmzzzzzzzz" << endl;
    };
};
int main(){
    // Memanggil class
    Mobil mobil_saya;

    // melakukan set varaibel
    mobil_saya.nama_mobil = "Toyota";
    mobil_saya.jenis_mobil = "Sport";
    mobil_saya.warna_mobil = "Hitam";

    // cetak function
    cout << "Saya punya mobil dengan nama :" << mobil_saya.nama_mobil << endl;
    cout << "Jenis Mobil saya : " << mobil_saya.jenis_mobil << endl;
    cout << "Warna mobil saya : " << mobil_saya.warna_mobil << endl;
    //  memanggil function
    mobil_saya.suara_mobil();
    return 0;
}