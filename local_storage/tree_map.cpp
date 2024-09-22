#include<iostream>
#include<map>

using namespace std;

void cetak_all(map<int,string> tree_map){
    cout << "Value pada Tree yang ada pada tree map sekarang : " << endl;
    for(const auto& value : tree_map){
        cout << value.first << " : " << value.second << endl;
    }
}

void cetak(string poisi,string value){
    cout << "Nilai yang ada pada posisi ke "<< poisi <<" : " << value << endl;
}

int main(){
    // inisialisasi
    map<int,string> treeMap;
    //  mengisi treeMap
    treeMap[0] = "Satu";
    treeMap[1] = "Dua";
    treeMap[3] = "Tiga";
    treeMap[2] = "Empat";
    //  cetak semua isi
    cetak_all(treeMap);
    cout << endl;
    // Cara emamnggil Tree map 
    cetak("2",treeMap[2]);
    cout << endl;
    // Mau ubah nilain
    treeMap[2] = "Tiga";
    cetak("2",treeMap[2]);
    cout << endl;
    // Menghapus nilai
    treeMap.erase(2);
    cetak_all(treeMap);
    cout << endl;
    return 0;
}