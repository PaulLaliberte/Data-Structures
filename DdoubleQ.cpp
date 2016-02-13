//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//doubleQ.cpp: Implementation of a doubly-linked list for a queue. Notice test in printLink/printRecursion that proves
//that this is doubly-linked.


#include "doubleQ.h"
#include <iostream>

template<class t>
doubleQueue<t>::doubleQueue() : front(NULL), back(NULL) {}


template<class t>
bool doubleQueue<t>::isEmpty()
{
    return front == NULL;
}


template<class t>
bool doubleQueue<t>::enqueue(const t &aItem)
{
    if(isEmpty())
    {
        front = new node;
        front -> data = aItem;
        front -> next = NULL;
        front -> prev = NULL;
        back = front;
        return true;
    }
    else
    {
        node* temp;
        
        temp = new node;
        temp -> data = aItem;
        temp -> next = NULL;
        temp -> prev = back;
        back -> next = temp;
        back = temp;
        return true;
    }
    return false;
}


template<class t>
bool doubleQueue<t>::dequeue()
{
    if(isEmpty())
    {
        std::cout << "Queue is empty, cannot dequeue." << std::endl;
        return false;
    }
    else
    {
        node* nodeToDelete;
        nodeToDelete = front;
        front = front -> next;
        
        delete nodeToDelete;
        nodeToDelete = nullptr;
        return true;
    }
    
}


template<class t>
void doubleQueue<t>::peekFront()
{
    if (isEmpty())
        std::cout << "Cannot peek, queue is empty." << std::endl;
    else
        std::cout << front -> data << std::endl;
}


template<class t>
void doubleQueue<t>::printLink()
{
    if (front != NULL)
    {
        //printRecursive(back);  //Can replace with "back" and change printRecursive(n -> prev) to prove doubly linked.
        printRecursive(front);   //back -> prev (works way from back to front); front -> next (works from front to back).
    }
    else
        std::cout << "Queue is EMPTY." << std::endl;
}


template<class t>
void doubleQueue<t>::printRecursive(node *n)
{
    if(n)
    {
        std::cout << n -> data << std::endl;
        printRecursive(n -> next);
    }
}


template<class t>
doubleQueue<t>::~doubleQueue()
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




