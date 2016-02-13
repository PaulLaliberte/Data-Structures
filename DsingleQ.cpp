//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//singleQ.cpp: Implementation of a queue using a singly-linked list. 

#include "singleQ.h"
#include <iostream>

template<class t>
singleQueue<t>::singleQueue() : front(NULL), back(NULL) {}


template<class t>
bool singleQueue<t>::isEmpty()
{
    return front == NULL;
}


template<class t>
bool singleQueue<t>::enqueue(const t &aItem)
{
    if(isEmpty())
    {
        front = new node;
        front -> data = aItem;
        front -> next = NULL;
        back = front;
        return true;
    }
    else
    {
        node* temp;
        temp = new node;
        
        temp -> data = aItem;
        temp -> next = NULL;
        back -> next = temp;
        back = temp;
        return true;
    }
    return false;
}


template<class t>
bool singleQueue<t>::dequeue()
{
    if(!isEmpty())
    {
        node* nodeToDelete;
        nodeToDelete = front;
        front = front -> next;
        
        if (front == NULL)
            back = NULL;
        
        delete nodeToDelete;
        nodeToDelete = nullptr;
        return true;
    }
    else
    {
        std::cout << "Cannot dequeue, queue is empty." << std::endl;
        return false;
    }
}


template<class t>
void singleQueue<t>::peekFront()
{
    if (!isEmpty())
    {
        std::cout << front -> data << std::endl;
    }
    else
        std::cout << "Cannot peek, queue is empty" << std::endl;
}


template<class t>
void singleQueue<t>::printLink()
{
    if (front != NULL)
    {
        printRecursive(front);
    }
    else
        std::cout << "Queue is EMPTY." << std::endl;
}


template<class t>
void singleQueue<t>::printRecursive(node* n)
{
    if(n)
    {
        std::cout << n -> data << std::endl;
        printRecursive(n -> next);
    }
}


template<class t>
singleQueue<t>::~singleQueue()
{
    node* temp;
    while (front != NULL)
    {
        temp = front -> next;
        delete front;
        front = nullptr;
        front = temp;
    }
    
    std::cout << "QUEUE DELETED." << std::endl;
}
