#include "randomArry.hpp"
#include<iostream>


void RandomArry::generatorRandomArray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] = rand() % 100 + 1; // buat nilai random 1 ~ 100
    }
};