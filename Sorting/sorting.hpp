#ifndef SORTING_HPP
#define SORTING_HPP
class Sorting{
    private : 
        int* array;
        int n;
    public : 
        Sorting(int arr[] , int n);
        ~Sorting();
        void bubbleShort();
        void selectionShort();
        void printArray() const;
};
#endif