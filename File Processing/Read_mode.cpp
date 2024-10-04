#include<iostream>
#include<fstream>  // gunanya untuk memanggil module file
using namespace std;

int main(){
    //  mode r (read)
    // inisialisasikan apa yang ingin kita buka 
    ifstream read_mode ("./Read_mode.txt",ifstream::in);
    // misal file belum di buat
    // ifstream read_mode("./testing.txt",ifstream::in);
    // misal di luar folder file processing
    // ifstream read_mode("../OOP/testing.txt",ifstream::in);
    //  check dulu apakah ada atau tidak 
    if(read_mode.is_open()){
        cout << "File telah di Temukan " << endl;
        cout << endl;
        cout << "Value Dari text tersebut : " << endl;
        // tampung nilai tulisannya 
        string line;
        while(getline(read_mode,line)){
            cout << line << endl;
        }
        read_mode.close(); // ini code untuk memperingan ram 
    }else{
        cout << "File tidak di temukan" << endl;
    }

    // sifat dari Read file ini pastikan file harus sudah di temukan 
    return 0;
}