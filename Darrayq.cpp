//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//arrayQ.cpp: Implementation of a queue using an array. Notice how counter is used. 

#include "arrayQ.h"
#include <iostream>

template<class t>
queueArray<t>::queueArray() : front(0), counter(0), placeHolder(-1)
{
    item = new t[MAX_CAPACITY];
}

template<class t>
bool queueArray<t>::isEmpty()
{
    return counter <= 0;
}


template<class t>
bool queueArray<t>::enqueue(const t &aItem)
{
    if (placeHolder < MAX_CAPACITY - 1)
    {
        placeHolder++;
        item[placeHolder] = aItem;
        counter++;
        return true;
    }
    else
    {
        DBLarray();
        enqueue(aItem);
        return false;
    }
    
}


template<class t>
void queueArray<t>::DBLarray()
{
    MAX_CAPACITY *= 2;                    //Same exact algorithm that was implemented for the stack. Use same test to prove.
    t *tempArray;
    tempArray = item;
    item = new t[MAX_CAPACITY];
    
    for (int i = 0; i < MAX_CAPACITY; i++)     //Copy data from temp back into item
        item[i] = tempArray[i];
}


template<class t>
bool queueArray<t>::dequeue()
{
    if (!isEmpty())
    {
        front++;
        counter--;
        return true;
    }
    else
    {
        std::cout << "Cannot dequeue, queue is empty." << std::endl;
        return false;
    }
}


template<class t>
void queueArray<t>::print()
{
    if (!isEmpty())
    {
        for (int i = 0; i < counter; i++)
        {
            
            std::cout << item[front + i] << std::endl;
        }
    }
    else
        std::cout << "Queue is EMPTY." << std::endl;
}


template<class t>
void queueArray<t>::frontPeek()
{
    if (!isEmpty())
    {
        std::cout << item[front] << std::endl;
    }
    else
        std::cout << "Queue is empty" << std::endl;
}


template<class t>
queueArray<t>::~queueArray()
{
    delete [] item;
    item = nullptr;
    std::cout << "QUEUE DELETED." << std::endl;
}














