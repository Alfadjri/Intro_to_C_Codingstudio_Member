#include<iostream>
#include<fstream>
using namespace std;

string input_value(){
    cout << "Masukan nama anda : ";
    string value;
    getline(cin ,value);
    value = value + "\n";
    return value;
}

int main(){
    fstream write ("./Write_Create_Trunc_mode.txt",fstream::in | fstream::out | fstream::trunc);
    if(!write.is_open()){
        cout << "File tidak di temukan" << endl;
    }
    
    string username = "Username : " + input_value();
    write << username;
    string password = "password : " + input_value();
    write << password;
    write.close();
    return 0;
}