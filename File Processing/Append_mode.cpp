#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // append atau add new line (a)
    // ini harus ada file nya dulu 
    ofstream appendFile ("./Append_mode.txt",ios::app);
    if(appendFile.is_open()){
        cout << "File di temukan" << endl;
        cout << endl;
        cout << "Masukan pesan yang ingin di tambahkan : ";
        string value;
        getline(cin ,value);
        value = value + "\n";
        //  masukin file nya 
        appendFile << value;
        appendFile.close();
    }else{
        cout << "File tidak bisa di tambahakan" << endl;
    }
    return 0;
}