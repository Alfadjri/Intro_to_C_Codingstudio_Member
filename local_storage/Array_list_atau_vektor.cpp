#include<iostream>
#include<vector>
using namespace std;


void cetak_all(vector<int> number){
    cout << "Element dari vector : " << endl;
    for(int value : number){
        cout << value << endl;
    }
}

int main(){
    // inisialisasi 
    vector<int> number;

    //  isi vector
    number.push_back(20);
    number.push_back(12);
    number.push_back(10);
    number.push_back(13);
    number.push_back(20);

    cetak_all(number);
    cout << endl;
    
    // update 
    number[2] = 30;
    cetak_all(number);
    cout << endl;

    // vector itu cuman bisa delete last value
    number.pop_back();
    cetak_all(number);


    return 0;
}
