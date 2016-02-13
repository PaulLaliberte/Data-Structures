
//
//  main.cpp
//  Chapter7_ArrayStack
//
//  Created by Paul Laliberte on 7/28/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include "ArrayBag.h"
#include "ArrayBag.cpp"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    ArrayStack<int>* intStack = new ArrayStack<int>;
    intStack -> push(1);
    intStack -> peek();
    intStack -> push(2);
    intStack -> peek();
    intStack -> pop();
    intStack -> peek();
    
    cout << endl;
    cout << endl;
    
    ArrayStack<string>* stringStack = new ArrayStack<string>;
    stringStack -> push("Hello");
    stringStack -> peek();
    stringStack -> push("Paul");
    stringStack -> peek();
    stringStack -> push("How are you?");
    stringStack -> peek();
    stringStack -> pop();
    stringStack -> pop();
    stringStack -> peek();
    
    cout << endl;
    cout << endl;
    
    ArrayStack<int>* maxStack = new ArrayStack<int>;
    
    for (int i = 0; i <= 12; i++)
        maxStack -> push(i);
    
    for (int i = 0; i <= 12; i++)
    {
        maxStack -> peek();
        maxStack -> pop();
    }
}

