#include<iostream>
#include<unordered_map>
using namespace std;

void cetak_all(unordered_map<int,string> hash_map){
    cout << "Value in Element hash_map" << endl;
    for(const auto& value : hash_map){
        // value.first = key dari hash_map
        //  value.second = value dari hash_map
        cout << value.first << " : " << value.second << endl;
    }
}


int main(){
    // inisialisasi hash_map
    unordered_map<int,string> hash_map;
    // cara isi 
    hash_map[4] = "Empat";
    hash_map[1] = "Satu";
    hash_map[2] = "Dua";
    hash_map[5] = "Lima";
    hash_map[3] = "Tiga";

    // print 
    cetak_all(hash_map);

    // mau update nilai
    cout << "Nilai value key ke 4 :" << hash_map[4] << endl;
    hash_map[4] = "Empat yang sudah di update";
    cout << "Nilai value key ke 4 setelah di update : " << hash_map[4] << endl;

    // cara menghapus nilai membebaskan memory kita bisa pakek erase
    hash_map.erase(5);
    cetak_all(hash_map);

    return 0;
}