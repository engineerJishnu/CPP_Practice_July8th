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
    
    // simple class
    parentClass object1;
    parentClass * pointerparentClass;
    pointerparentClass = nullptr;
    pointerparentClass = &object1;
    Message("This class has class pointer");
    pointerparentClass -> display("Bjarne" , 70);
    
    // class with inheritance
    
    derievedClass DObject1;
    derievedClass *pointerderievedclass; // class pointer
    pointerderievedclass = nullptr;
    pointerderievedclass = &DObject1; 
    pointerderievedclass -> print();
    //DObject1.display("jishnu", 45);
    Message("the example of inheritance");
    pointerderievedclass -> display("jishnu", 45);
    //smart pointers
    // systax is ... std::unique_ptr<type> nameOfvariable (new type);
    std::unique_ptr<A> ClassA (new A);
    ClassA -> someMessage();
    // address of the ClassA
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    
    // transfer of the ownership
    std::unique_ptr<A> ClassB = move(ClassA);
    Message("\nTransfering the ownership from ClassA to ClassB");
    ClassB -> someMessage();
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    std::cout << "The address of ClassB " << ClassB.get() << std::endl;
    Message("The end of program.");
    
    //transfering of the ownership
    std::unique_ptr<A> ClassC = move(ClassB);
    Message("\nTransfering the ownership from ClassB to ClassC");
    ClassC -> someMessage();
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    std::cout << "The address of ClassB " << ClassB.get() << std::endl;
    std::cout << "The address of ClassC " << ClassC.get() << std::endl;
    
    return 0;
}

