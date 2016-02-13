//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//arrayStack.cpp: Implementation of a stack that uses an array. Notice DBLarray method.

#include "arrayStack.h"
#include <iostream>


template<class t>
ArrayStack<t>::ArrayStack(): top(-1)
{
    item = new t[MAX_CAPACITY];
}


template<class t>
bool ArrayStack<t>::isEmpty()
{
    return top < 0;
}


template<class t>
bool ArrayStack<t>::push(const t& aItem)
{
    if (top < MAX_CAPACITY - 1)
    {
        top++;
        item[top] = aItem;
        return true;
    }
    else
    {
        DBLarray();
        push(aItem);
        return false;
    }
}


template<class t>
void ArrayStack<t>::DBLarray()         //Doubles array each time it is full
{                                      //TEST: in main create a ArrayStack<int> stack;
    MAX_CAPACITY = MAX_CAPACITY * 2;   //place as many ints as you want into stack i
    t *tempArray;                      //i.e. for(int i = 0; i < 200;...) stack.push(i);
    tempArray = item;                  //NOTICE that I have MAX_CAPACITY set at 2 originally
    item = new t[MAX_CAPACITY];
    
    for(int i = 0; i < MAX_CAPACITY; i++)    //Copy data from temp back into item
        item[i] = tempArray[i];
    
    
}


template<class t>
bool ArrayStack<t>::pop()
{
    if (!isEmpty())
    {
        top--;
        return true;
    }
    else
    {
        std::cout << "Cannot pop empty array." << std::endl;
        return false;
        
    }
}


template<class t>
void ArrayStack<t>::peek()
{
    if (!isEmpty())
    {
        std::cout << item[top] << std::endl;
    }
    else
        std::cout << "Array empty, cannot peek." << std::endl;
    
}


template<class t>
void ArrayStack<t>::print()
{
    if(!isEmpty())
    {
        int subTop = top;
        while (subTop != -1)
        {
            std::cout << item[subTop] << std::endl;
            subTop--;
        }
    }
    else
        std::cout << "Stack is EMPTY." << std::endl;
        
}


template<class t>
ArrayStack<t>::~ArrayStack()    //Delete array when done to free up memory
{
    delete [] item;
    item = nullptr;
    std::cout << "STACK DELETED." << std::endl;
    
}









