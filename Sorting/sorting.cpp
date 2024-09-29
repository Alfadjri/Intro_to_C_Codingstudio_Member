#include "sorting.hpp"
#include <iostream>
using namespace std;

Sorting::Sorting(int arr[], int n) {
    this->n = n;
    this->array = new int[n];
    for (int i = 0; i < n; i++) {
        this->array[i] = arr[i];
    }
}

Sorting::~Sorting() {
    delete[] array;
}
void Sorting::bubbleShort()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
void Sorting::selectionShort(){
    int i , k , min_idx;
    for(int i = 0 ; i < n - 1 ; i++){
        min_idx = i;
        for(int j = i+1; j < n ; j++){
            if(array[j] < array[min_idx]){
                min_idx = j;
            }
        }
        int tmp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = tmp;
    }
}

void Sorting::printArray() const{
    for(int i = 0 ; i < n ; i++){
        cout << i << ". " << array[i] << endl;
    }
}