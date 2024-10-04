#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //  gambungan
    //  append and create (a+)
    fstream appendAndCreate ("Append_Create_mode.txt",fstream::app | fstream::in);
    if(!appendAndCreate.is_open()){
        cout << "File tidak di temukan" << endl;
    }

    cout << "Masukan pesan yang ingin di tambahkan : ";
    string value;
    getline(cin ,value);
    value = value + "\n";
    appendAndCreate << value;
    appendAndCreate.close();

    return 0;
}