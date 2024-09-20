#include <iostream>
using namespace std;

int main()
{
    // Tipe data Angka bulat (Integer)
    int integerNumber = 20;
    short shortNumber = 5;
    long longNumber = 1234567890;
    long long veryLongNumber = 9876543210;

    // Mencetak angkanya
    cout << "Ini list tipe data Integer " << endl;
    cout << "integer default : " << integerNumber << endl;
    cout << "integer short : " << shortNumber << endl;
    cout << "integer long : " << longNumber << endl;
    cout << "integer veryLong : " << veryLongNumber << endl;
    cout << endl;
    //  Tipe data float atau decimal
    // lambang desimal atau koma itu . (titik) bukan , (koma)
    float floatNumber = 3.14f;
    double doubleNumber = 2.781828;
    long double veryLongDecimalNumber = 1.61803398875;

    cout << "Ini list tipe data Decimal " << endl;
    cout << "Number Float  : " << floatNumber << endl;
    cout << "Number double  : " << doubleNumber << endl;
    cout << "Number verylong double  : " << veryLongDecimalNumber << endl;
    cout << endl;
    // Tipe data Char atau huruf
    char charVariabel = 'A';
    cout << "Ini list huruf atau karakter " << endl;
    cout << "ini huruf : " << charVariabel << endl;
    //  Tipe  non data primitif
    char contoh_kalimant_2[255] = "Testing ini text area yang bisa di tulis sepanjang panjangannya dan bla bla bla bla";
    cout << "contoh kalimat non primitif sebelum string ada " << endl;
    cout << contoh_kalimant_2 << endl;
    cout << endl;

    //  Kalimat atau di kenal dengan nama String dimana dapat menampung sekitar 255
    string contohKalimat = "Nama Saya Alfajdri Dwi Fadhilah";
    cout << "Ini list kalimat atau string" << endl;
    cout << contohKalimat << endl;
    cout << endl;
    // boolean 
    bool boolVariable = true;
    cout << "Ini Boolean" << endl;
    cout << "Boolean Variabel : " << boolalpha << boolVariable << endl;
    return 0;
}