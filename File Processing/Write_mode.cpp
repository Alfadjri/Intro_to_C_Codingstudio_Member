#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // menulis file W (write)
    ofstream writeFile ("./Write_mode.txt",ofstream::out);
    if(writeFile.is_open()){
        cout << "File berhasil di buat" << endl;
        cout <<endl;
        // hanya tambahan code
        cout << "Masukan pesan yang ingin di simpan : ";
        string value;
        getline(cin ,value);
        //  end tambahan 

        
        // kita tambahin sebuah inputan yang mau di simpan
        writeFile << value;
        writeFile.close();
    }
    //  sifatnya dia akan menimpah nilai yang ada atau di reset kembali 
    return 0;
}