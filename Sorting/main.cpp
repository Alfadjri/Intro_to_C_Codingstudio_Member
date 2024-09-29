#include<iostream>
#include "sorting.hpp"
#include "randomArry.hpp"
//  untuk compile nya ini sedikit susah 
//  g++ main.cpp sorting.cpp -o sorting.o

using namespace std;


int main(){
    int n;
    cout << "Masukan jumlah data yang di inginkan: ";
    cin >> n;
    int* arr = new int[n];
    RandomArry randomArry;
    randomArry.generatorRandomArray(arr, n);
    // Sorting ini datang dari sorting.hpp
    Sorting data(arr, n);  // sorting (arr,n) ini masuknya ke teknik construktor di sorting.hpp
    cout << "Array sebelum sorting: " << endl;
    data.printArray();
    // data.bubbleShort();
    data.selectionShort();
    cout << "Array setela di sorting" << endl;
    data.printArray();
}