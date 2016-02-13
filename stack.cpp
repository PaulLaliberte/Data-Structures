
//
//  stack.cpp
//  Chapter6_Stack
//
//  Created by Paul Laliberte on 7/23/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//
#include "stack.h"
#include <iostream>

template<class ItemType>
stack<ItemType>::stack() : top(-1)
{
    std::cout << "constructor called." << std::endl;
}


template<class ItemType>
bool stack<ItemType>::isEmpty() const
{
    return top < 0;
}


template<class ItemType>
bool stack<ItemType>::push(const ItemType &newEntry)
{
    bool hasRoom = (top < MAX_STACK - 1);
    if (hasRoom)
    {
        top++;
        aStack[top] = newEntry;
    }
    else
        std::cout << "Stack is full" << std::endl;
    return hasRoom;
}


template<class ItemType>
bool stack<ItemType>::pop()
{
    bool canPop;
    if (!isEmpty())
    {
        top--;
        canPop = true;
        return canPop;
    }
    else
    {
        std::cout << "Stack is empty, cannot pop" << std::endl;
        canPop = false;
        return canPop;
    }
}


template<class ItemType>
void stack<ItemType>::peek() const
{
    std::cout << aStack[top] << std::endl;
}

