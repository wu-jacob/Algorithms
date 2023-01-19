// DynamicArray.h
#include <iostream>

using namespace std;

#ifndef IntArray_H
#define IntArray_H

class IntArray{

public:
    //Default Constructor
    IntArray();

    //Overload Constructor
    IntArray(int, int);

    // Returns size of the array
    int size();
    // Returns true if array is empty
    bool isEmpty();

    // Returns value at given index
    int get(int);
    // Sets value at given index
    void set(int, int);

    // Clears the array
    void clear();

    // Appends value to the end of the array
    void add(int);
    // Removes value at given index
    void removeAt(int);
    // Removes given value from the array
    void remove(int);

private:
    int capacity; // actual capacity of array
    int len; // length user thinks array is
    int arr[]; // the array

};

#endif