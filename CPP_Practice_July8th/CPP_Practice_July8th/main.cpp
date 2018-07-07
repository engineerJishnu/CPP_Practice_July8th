//
//  main.cpp
//  CPP_Practice_July8th
//
//  Created by Jishnu Chakrabarti on 7/7/18.
//  Copyright © 2018 Jishnu Chakrabarti. All rights reserved.
//

#include "header.h"

int main(int argc, const char * argv[]) {
    
    Message("Hello World!");
    //Raw String Literals
    std::cout << R"(John Wick is the man of "FOCUS", "COMMITMENT" and "SHEER WILL".)" << std::endl;
    // templates
    printVal(420);
    printVal(3.1415);
    printVal("This is a Template");
    // class
    parentClass object1;
    parentClass * pointerparentClass;
    pointerparentClass = nullptr;
    pointerparentClass = &object1;
    Message("This class has class pointer");
    pointerparentClass -> display("Bjarne" , 70);
    
    return 0;
}
