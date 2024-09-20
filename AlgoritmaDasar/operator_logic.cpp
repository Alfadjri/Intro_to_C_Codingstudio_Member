#include<iostream>
using namespace std;

int main(){
    //  Operator AND (&&)
    //  keduanya harus bernilai true
    //  jika salah satu tidak memenuhi maka akan bernilai false
    //  kalau dua duanya false maka tetap false
    bool x = true;
    bool y = false;
    bool hasil = x && y;
    cout << "Hasil " << boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol &&  adalah " << boolalpha << hasil << endl;
    x = true;
    y = true;
    hasil = x && y;
    cout << "Hasil "<< boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol &&  adalah " << boolalpha << hasil << endl;
    x = false;
    y = false;
    hasil = x && y;
    cout << "Hasil "<< boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol &&  adalah " << boolalpha << hasil << endl;
    //  Operator OR (||)
    //  keduanya harus bernilai true
    //  jika salah satu tidak memenuhi maka akan bernilai true
    //  kalau dua duanya false maka tetap false
    x = false;
    y = true;
    hasil = ( x || y );
    cout << "Hasil "<< boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol ||  adalah " << boolalpha << hasil << endl;
    x = true;
    y = true;
    hasil = ( x || y );
    cout << "Hasil "<< boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol ||  adalah " << boolalpha << hasil << endl;
    x = false;
    y = false;
    hasil = ( x || y );
    cout << "Hasil "<< boolalpha << x <<  " ketemu " << boolalpha << y <<" dengan simbol ||  adalah " << boolalpha << hasil << endl;

    //  kondisi matematika
    int a = 2;
    int b = 2;
    //  kecil dari 
    hasil = (a < b);
    cout << "Apakah " << a <<  " kecil (<) "  << b <<" : " << boolalpha << hasil << endl;
    //  kecil sama dengan
    hasil = (a <= b);
    cout << "Apakah " << a <<  " kecil sama dengan (<=) "  << b <<" : " << boolalpha << hasil << endl;
    hasil = (a > b);
    cout << "Apakah " << a <<  " besar(>) "  << b <<" : " << boolalpha << hasil << endl;
    hasil = (a >= b);
    cout << "Apakah " << a <<  " besar sama dengan(>=) "  << b <<" : " << boolalpha << hasil << endl;
    hasil = (a == b);
    cout << "Apakah " << a <<  " bandingkan (==) "  << b <<" : " << boolalpha << hasil << endl;
    return 0;
}