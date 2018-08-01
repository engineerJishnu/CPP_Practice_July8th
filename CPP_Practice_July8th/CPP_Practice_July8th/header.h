//
//  header.h
//  CPP_Practice_July8th
//
//  Created by Jishnu Chakrabarti on 7/7/18.
//  Copyright © 2018 Jishnu Chakrabarti. All rights reserved.
//

#pragma once

#ifndef header_h
#define header_h

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <memory> // unique pointer
#include <cstdio>

void Message (const char* message);

template<class T>
void printVal (T value) {
    Message("Example of Templates.");
    std::cout << value << std::endl;
}

//class
class parentClass {
private:
    std::string pCName;
    int pCAge;
    
public:
    parentClass();
    ~parentClass();
    void display();
};

class derievedClass:public parentClass {
public:
    void print();
    std::vector<int> numbers;
};
//class with smart pointers

class A {
public:
    void someMessage();
};

struct sPerson {
    std::string name;
    int age;
    float mBasic;
};
#endif /* header_h */
