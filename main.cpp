//
//  main.cpp
//  lab1
//
//  Created by Иван Купалов on 17.09.14.
//  Copyright (c) 2014 charlag. All rights reserved.
//

#include <iostream>
#include "Array.h"

int main(int argc, const char * argv[]) {
    MyArray array(10);
    array.printArray();
    array.add(4);
    array.add(3);
    array.printArray();
    MyArray array2 = array;
    array2.printArray();
    array2.add(100);
    array2.printArray();
    std::cout << "Array 2 product: " << array2.product() << std::endl;
    array2.removeArrayPart(0, 2);
    array2.printArray();
    array2.removeArrayPart(0, 1);
    array2.printArray();
    array2.inputArray(3);
    //input: 9 8 7
    array2.printArray();
    return 0;
}
