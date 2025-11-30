#include <iostream>
#include <array>
using namespace std;


void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    // Ex 1: Create + Print Dynamic Array
    int size = 5;
    int *dynamicArray = new int[size];
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 10;
    }
    print(dynamicArray, size);

    // Ex 2: Reverse a dynamic array
    int value;
    int startIndex = 0;
    int lastIndex = size - 1;
    while(startIndex < lastIndex) {
        value = dynamicArray[startIndex];
        dynamicArray[startIndex] = dynamicArray[lastIndex];
        dynamicArray[lastIndex] = value;
        startIndex++;
        lastIndex--;
    }
    print(dynamicArray, size);

    /* 
    Leetcode questions:
        LC 27 – Remove Element  
        LC 26 – Remove Duplicates from Sorted Array  
        LC 344 – Reverse String  
        LC 283 – Move Zeroes  
        LC 66 – Plus One  
        LC 977 – Squares of a Sorted Array  
        LC 118 – Pascal’s Triangle  
        LC 88 – Merge Sorted Array  
        LC 1299 – Replace Elements with Greatest Element on Right Side  
        LC 1480 – Running Sum of 1d Array  
        LC 1929 – Concatenation of Array  
        LC 1051 – Height Checker  
        LC 217 – Contains Duplicate  
        LC 136 – Single Number  
    */

    delete[] dynamicArray;

    return 0;
}
