//  Лабораторная работа №1
//
//  Array.cpp


#include <stdio.h>
#include "Array.h"

MyArray::MyArray(int length) {
    this->length = length;
    actualLength = 0;
    array = new int[length];
}

MyArray::MyArray(const MyArray &obj) {
    length = obj.length;
    actualLength = obj.actualLength;
    array = new int[length];
    std::copy(obj.array, obj.array + actualLength, array);
}

MyArray::~MyArray() {
    delete[] array;
}

void MyArray::printArray() {
    if (actualLength == 0) {
        std::cout << "Array of " << length << " elements is empty." << std::endl;
        return;
    }
    std::cout << actualLength << " element(s) of array with length " << length <<std::endl;
    for (int i = 0; i < actualLength; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

bool MyArray::add(int newElem) {
    if (length == actualLength) {
        return false;
    }
    this->array[actualLength] = newElem;
    actualLength++;
    return true;
}

int MyArray::product() {
    int product = 1;
    for (int i = 0; i < actualLength; i++) {
        product *= array[i];
    }
    return product;
}

unsigned int MyArray::getLength() {
    return length;
}

unsigned int MyArray::getActualLength() {
    return actualLength;
}

bool MyArray::removeArrayPart(unsigned int firstIndex, unsigned int number) {
    if (firstIndex > actualLength || firstIndex + number > actualLength) {
        return false;
    }
    unsigned int copyStart = firstIndex + number;
    for (int i = firstIndex; i < actualLength; i++) {
        array[i] = array[copyStart + i];
    }
    actualLength -= number;
    return true;
}

int MyArray::get(unsigned int index) {
    if (index > actualLength - 1) {
        return 0;
    }
    return array[index];
}

void MyArray::inputArray(unsigned int size) {
    if (actualLength + size > length) {
        std::cout << "Not enought space in the array." << std::endl;
        return;
    }
    std::cout << "Enter " << size << " elements." << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[actualLength++];
    }
}