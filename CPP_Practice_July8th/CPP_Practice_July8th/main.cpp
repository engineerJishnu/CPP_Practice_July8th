//  main.cpp
//  CPP_Practice_July8th
//
//  Created by Jishnu Chakrabarti on 7/7/18.
//  Copyright © 2018 Jishnu Chakrabarti. All rights reserved.
//
#include "header.h"

int main(int argc, const char * argv[]) {
    
    Message("Hello World!");
    //--------------------------------------------------------------------------------------
    
    //Raw String Literals
    std::cout << R"(John Wick is the man of "FOCUS", "COMMITMENT" and "SHEER WILL".)" << std::endl;
    //--------------------------------------------------------------------------------------
    
    // templates
    printVal(420);
    printVal(3.1415);
    printVal("This is a Template");
    //--------------------------------------------------------------------------------------
    
    // simple class
    parentClass object1;
    parentClass * pointerparentClass;
    pointerparentClass = nullptr;
    pointerparentClass = &object1;
    Message("This class has class pointer");
    pointerparentClass -> display();
    //--------------------------------------------------------------------------------------
    
    // class with inheritance
    derievedClass DObject1;
    derievedClass *pointerderievedclass; // class pointer
    pointerderievedclass = nullptr;
    pointerderievedclass = &DObject1; 
    pointerderievedclass -> print();
    //DObject1.display();
    Message("the example of inheritance");
    pointerderievedclass -> display();
    //--------------------------------------------------------------------------------------
    
    //smart pointers
    // syntax is ... std::unique_ptr<type> nameOfvariable (new type);
    std::unique_ptr<A> ClassA (new A);
    ClassA -> someMessage();
    // address of the ClassA
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    //--------------------------------------------------------------------------------------
    
    // transfer of the ownership
    std::unique_ptr<A> ClassB = move(ClassA);
    Message("\nTransfering the ownership from ClassA to ClassB");
    ClassB -> someMessage();
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    std::cout << "The address of ClassB " << ClassB.get() << std::endl;
    Message("The end of program.");
    //--------------------------------------------------------------------------------------
    
    //transfering of the ownership
    std::unique_ptr<A> ClassC = move(ClassB);
    Message("\nTransfering the ownership from ClassB to ClassC");
    ClassC -> someMessage();
    std::cout << "The address of ClassA " << ClassA.get() << std::endl;
    std::cout << "The address of ClassB " << ClassB.get() << std::endl;
    std::cout << "The address of ClassC " << ClassC.get() << std::endl;
    //--------------------------------------------------------------------------------------
    
    // simple struct example without function
    Message("An Example of struct");
    struct sPerson sObject1;
    std::cout << "Enter name " << std::endl;
    std::cin >> sObject1.name;
    std::cout << "Enter age " << std::endl;
    std::cin >> sObject1.age;
    std::cout << "Enter Basic salary " << std::endl;
    std::cin >> sObject1.mBasic;
    std::cout << "The output" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Name - " << sObject1.name << "\tAge - " << sObject1.age << "\tBasic Salary (Euro) - " << sObject1.mBasic << std::endl;
   //--------------------------------------------------------------------------------------
    // array and pointer arithmatic
    int array[] {1,2,3,4,5,6};
    
    for(int i: array) {
        std::cout << " The data items in an array " << i << std::endl;
    }
    
    int *ptr_array = array; //
    std::cout << " The first the element of the an array " << *ptr_array << std::endl;
    *ptr_array = 11; // dereferencing the first element from 1 to 11
    array[1] = 20; // dereferencing the first element from 1 to 20
    array[2] = 40; // dereferencing the first element from 1 to 40
    
    for (int i :array) {
        std::cout << " The data items in an array after replacing some items " << i << std::endl;
    }
    
    Message("The new elements & Pointer Arithmatic");
    std:: cout << array[1] << " " << array[2] << " " << *(ptr_array) + 3 << std::endl; // pointer arithmatic
     //--------------------------------------------------------------------------------------
 
    //--------------------------------------------------------------------------------------
    return 0;
}

/*
 template <class T>
 class Calculator
 {
 private:
 T num1, num2;
 
 public:
 Calculator(T n1, T n2)
 {
 num1 = n1;
 num2 = n2;
 }
 
 void displayResult()
 {
 cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
 cout << "Addition is: " << add() << endl;
 cout << "Subtraction is: " << subtract() << endl;
 cout << "Product is: " << multiply() << endl;
 cout << "Division is: " << divide() << endl;
 }
 
 T add() { return num1 + num2; }
 
 T subtract() { return num1 - num2; }
 
 T multiply() { return num1 * num2; }
 
 T divide() { return num1 / num2; }
 };
 
 int main()
 {
 Calculator<int> intCalc(2, 1);
 Calculator<float> floatCalc(2.4, 1.2);
 
 cout << "Int results:" << endl;
 intCalc.displayResult();
 
 cout << endl << "Float results:" << endl;
 floatCalc.displayResult();
 
 return 0;
 } */
