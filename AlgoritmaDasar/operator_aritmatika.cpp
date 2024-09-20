#include<iostream>
#include<cmath>
#include<iomanip>


int main(){
    int x = 10;
    int y = 20;
    int hasil;

    // penjumlahan
    hasil = x + y ;
    std::cout << x << " + " << y << " = " << hasil << std::endl;
    
    // pengurangan
    hasil = x - y;
    std::cout << x << " - " << y << " = " << hasil << std::endl;
    //  kali
    hasil = x * y;
    std::cout << x << " * " << y << " = " << hasil << std::endl;
    // Pangkat note : pastikan sudah include <cmath>
    hasil = pow(2,3);
    std::cout << 2 << " ^ " << 3 << " = " << hasil << std::endl;
    //pembagian 
    // note kalau untuk pembagian saran pakek float atau double
    hasil = x / y ;
    std::cout << x << " / " << y << " = " << hasil << std::endl;
    float hasilfloat = 15.5 / 3 ;
    std::cout << 15.5 << " / " << 3 << " = " << std::setprecision(2) << hasilfloat << std::endl;
    // moduls (sisa dari pembagian)
    hasil = 3 % 2;
    std::cout << 3 << " % " << 2 << " = " << hasil << std::endl;
    // hasil = 1 + 1;
    //  hasil = hasil + 1;
    // rewrite
    x = 1;
    std::cout << "sebelum di lakukan x++ : " << x << std::endl;
    // posisi simbol ++ atau -- ini akan berpengaruh di kapan kita akan melakukan kalkulasi
    // posisi nya di kanan ini di tambahkan dulu 
    x++;
    std::cout <<"Berapakah hasil x setelah di x++ : " << x << std::endl;
    std::cout << std::endl;
    // posisi di sebelah kiri ini di print dulu 
    ++x;
    std::cout <<"Berapakah hasil x setelah di ++x : " << x << std::endl;
    return 0;
}