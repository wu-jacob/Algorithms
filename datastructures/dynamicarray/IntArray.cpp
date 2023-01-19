#include "IntArray.h"

IntArray::IntArray() {
    capacity = 0;
    len = 0;
}

IntArray::IntArray(int capacity, int len) {
    if (capacity < 0) throw invalid_argument("received negative value");
    this->capacity = capacity;
    this->len = len;
}

int IntArray::size() { return len; }
bool IntArray::isEmpty() { return size() == 0; }

int IntArray::get(int index) { return arr[index]; }
void IntArray::set(int index, int value) { arr[index] = value; }

void IntArray::clear() {
    for (int i = 0; i < capacity; i++) {
        arr[i] = 0;
    len = 0;
    }
}

void IntArray::add(int value) {
    if (len+1 >= capacity) {
        if (capacity = 0) capacity = 1;
        else capacity *= 2;
    }
    arr[len++] = value;
}

void IntArray::removeAt(int index) {
    if (index >= len || index < 0) throw out_of_range("index out of bounds");
    for (int i = 0, j = 0; i < len; i++, j++) {
        if (i == index) {
            if (j == 0) arr[0] = arr[1];
            else j--;
        }
        else arr[j] = arr[i];
    capacity = --len;
    }
}

void IntArray::remove(int value) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == value) {
            removeAt(i);
        }
    }
}