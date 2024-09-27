#include<iostream>
using namespace std;

void cetak_all(string list[5]){
    cout << "Element dalam array :" << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << list[i] << endl;
    }
}

int main(){
    // inisialisasi Array 
    const int size = 5;
    string list_merek_mobil[size] = {"toyota","honda","ferari","BMW","Tesla"};
    // string list_merek_mobil[size];
    // insert method
    // list_merek_mobil[0] = "toyota";
    cetak_all(list_merek_mobil);
    cout << endl;
    //  update 
    list_merek_mobil[2] = "Dayhatsu";
    cetak_all(list_merek_mobil);
    cout << endl;
    // mau update posisi terakhir
    list_merek_mobil[size-1] = "Maung";
    cetak_all(list_merek_mobil);

    list_merek_mobil[4] = "";
    cetak_all(list_merek_mobil);



    return 0;
}