//
//  header.cpp
//  CPP_Practice_July8th
//
//  Created by Jishnu Chakrabarti on 7/7/18.
//  Copyright © 2018 Jishnu Chakrabarti. All rights reserved.
//

#include "header.h"

void Message (const char* message) {
    // KR style code block
    std::cout << (message) << std::endl;
}

//class
parentClass::parentClass() {
}
parentClass::~parentClass() {
    // destroy the object
}
void parentClass::display(std::string name, int age)
{
    pCName = name;
    pCAge = age;
    std::cout << "\nThe name is " << pCName << " and age is " << pCAge << std::endl;
}

// class with inheritance
void derievedClass::print() {
    int count = 0;
    Message("enter any numbers");
    std::cin >> count;
    for (int i = 0; i < count ; i++) {
        numbers.push_back(i);
    }
    std::cout << "Size : " << numbers.size() << std::endl;
    std::cout << "\nCapacity : " << numbers.capacity() << std::endl;
    //std::cout << "\nMax_Size : " << numbers.max_size() << std::endl;
    std::vector<int> :: iterator j;
    Message("The output of the vector<int> numbers ");
    for(j = numbers.begin(); j != numbers.end(); j++) {
            std::cout << *j << "\t";
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
}
//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

// class with smart pointers
void A::someMessage() {
    Message("this is an example of Unique Pointer with class A.");
}
