#include<iostream>
using namespace std;

int main(){
    int max_tiket = 2;
    int pembelian = 3;
    // if else kondisi
    // operator logic atau kondisi yang di inginkan
    // if kondisi
    // if(pembelian > 2){
    //     cout << "Error Kamu gak booleh beli lebih dari 2!" << endl;
    // }
    // cout << "Pembelian berhasil" << endl;
    cout << endl;
    cout << "INI contoh if else kondisi " << endl; 
    if(pembelian > 2){
        cout << "Error Kamu gak booleh beli lebih dari 2!" << endl;
        if (pembelian == 3){
            cout << "Ok ada nomer 3 " << endl;
        }
    }else{
        cout << "Pembelian berhasil" << endl;
    }
    // if else bersarang atau if else if 
    if(pembelian > 3){
        cout << "Error Kamu gak booleh beli lebih dari 2!" << endl;
    }else if (pembelian == 3) {
        cout << "Wah kamu dapat tiket kusus ni !" << endl;
    }else{
        cout << "Wah kamu dapat tiket kusus ni !" << endl;
    }
    // jika kondis program menu atau selection
    char nilai_peserta = 'C';
    switch(nilai_peserta){
        case 'A':
            cout << "Semangat Kamu berhasil mendapatkan nilai tertinggi" << endl;
        break;
        case 'B':
            cout << "ya cukup lah selamat ya " << endl;
        break;
        default:
            cout << "Waduh nilai kamu gak muncul ni saking kecilnya silahkan laporkan ke dosen bersangkutan" << endl;
        break;
    }
    // ternery (teknik menyingkat nilai)
    int a = 10;
    int b = 5;
    bool hasil = ( a < b ) ? 1 : 0 ;
    cout << "Apakah " << a << " Kecil dari " << b << " "<< boolalpha << hasil<<endl; 
    return 0;
}