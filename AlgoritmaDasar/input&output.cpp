#include<iostream>
using namespace std;

int main(){
    // valiabel 
    char nama_user[35];
    // case kita mau ambil nama user
    cout << "Belajar input program C++" << endl;
    cout << "Masukan nama anda : ";
    
    cin.getline(nama_user,35);
    //  berhasil 
    cout << "Selamat datang di rumah Tuan ! : " << nama_user << endl;
    return 0;
}