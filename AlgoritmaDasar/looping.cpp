#include<iostream>
using namespace std;

int main(){
    // while 
    // pada saat sayart di ketahui ini wajib di ketahui di awal
    int i = 1;
    while(i < 5){
        cout << i << ". love you!!!!" <<endl;
        i++;
    }
    // do while
    i = 1;
    do {
        i++;
        cout << i << endl;
    }while(i < 5);
    //  for 
    for(int k = 0 ; k < 5 ; k++ ){
        cout << k << " For you" << endl;
    }
    
    int arr[] = {1,2,3,4,5};
    for(int elem : arr){
        cout << "value index array : " << elem << endl;
    }

    return 0;
}