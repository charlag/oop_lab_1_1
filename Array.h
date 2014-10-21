//  Лабораторная работа №1
//
//  Array.h

#include <iostream>

#ifndef array_h
#define array_h
class MyArray {
    public:
    MyArray(int length);
    MyArray(const MyArray &obj);
    ~MyArray();
    
    void printArray();
    void inputArray(unsigned int size);
    bool add(int i);
    int get(unsigned int index);
    unsigned int getLength();
    unsigned int getActualLength();
    int product();
    bool removeArrayPart(unsigned int firstIndex, unsigned int number);
    
    private:
    int* array;
    unsigned int length;
    unsigned int actualLength;
};
#endif
