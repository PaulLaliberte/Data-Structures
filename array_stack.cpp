
//
//  ArrayBag.cpp
//  Chapter7_ArrayStack
//
//  Created by Paul Laliberte on 7/28/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include "ArrayBag.h"
#include <iostream>


template<class type>
ArrayStack<type>::ArrayStack(): top(-1) {}


template<class type>
bool ArrayStack<type>::isEmpty()
{
    return top < 0;
}

template<class type>
bool ArrayStack<type>::push(const type &aItem)
{
    if (top < 12)
    {
        top++;
        item[top] = aItem;
        return true;
    }
    else
        return false;
}


template<class type>
bool ArrayStack<type>::pop()
{
    if (!isEmpty())
    {
        top--;
        return true;
    }
    else
        return false;
}


template<class type>
void ArrayStack<type>::peek()
{
    if (!isEmpty())
    {
        type sub;
        sub = item[top];
        std::cout << sub << std::endl;
    }
    else
        std::cout << "Array empty, cannot peek." << std::endl;
    
}


