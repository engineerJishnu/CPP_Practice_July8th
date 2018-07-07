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
parentClass::parentClass(){
    // create the object
}
parentClass::~parentClass() {
    // destroy the object
}
void parentClass::display(std::string name, int age) {
    pCName = name;
    pCAge = age;
    
    std::cout << "The name is " << pCName << " and age is " << pCAge << std::endl;
}

