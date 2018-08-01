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
    pCAge = 0;
}
parentClass::~parentClass() {
    // destroy the object
}
void parentClass::display()
{
    std::cout << "Please enter your name " << std::endl;
    std::cin >> this -> pCName; // this pointer
    std::cout << "Please enter your age " << std::endl;
    std::cin >> this -> pCAge;
    std::cout << "\nThe name is " << this -> pCName << " and age is " << this -> pCAge << std::endl;
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
