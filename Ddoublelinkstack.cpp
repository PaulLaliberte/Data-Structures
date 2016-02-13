//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//DblLinkStack.cpp: Implementation of a doubly-linked list for a stack. Notice else if in push and print/printRecursive.
//There is test and explanation that proves doubly-linked below.

#include "DblLinkStack.h"
#include <iostream>

template<class t>
dblStack<t>::dblStack() : top(NULL), btm(NULL) {top = btm;}

template<class t>
bool dblStack<t>::push(const t &aItem)
{
    node* curr;
    bool pushSuccess;
    if (top == NULL)
    {
        curr = new node;
        top = curr;
        btm = curr;
        curr -> next = NULL;
        curr -> prev = NULL;
        curr -> data = aItem;
        return pushSuccess = true;
        
    }
    else if (top != NULL)
    {
        curr = new node;
        curr -> next = NULL;
        top -> next = curr;
        curr -> prev = top;
        top = curr;
        curr -> data = aItem;
        return pushSuccess = true;
        
    }
    else
        return pushSuccess = false;
}

template<class t>
void dblStack<t>::peek()
{
    
    if (top == NULL)
    {
        std::cout << "Stack is empty" << std::endl;
    }
    else
    {
        std::cout << top -> data << std::endl;
    }
}


template<class t>
bool dblStack<t>::pop()
{

    bool popSuccess;
    
    if (top != NULL)
    {
        node* curr;
        curr = top -> prev;
        
        node* nodeToPop = new node;
        top = nodeToPop;
        nodeToPop -> next = NULL;
        nodeToPop -> prev = NULL;
        delete nodeToPop;
        nodeToPop = nullptr;
        top = curr;
        return popSuccess = true;
    }
    else
    {
        std::cout << "Stack empty, cannot pop." << std::endl;
        return popSuccess = false;
    }
}

template<class t>
void dblStack<t>::print()
{
    if (top != NULL)
    {
        //printRecursive(btm);   //Can replace with "btm" and change printRecursive to: n -> next, to prove doubly linked.
        printRecursive(top);     //top -> prev (works from top to bottom); btm -> next (works from bottom to top).

    }
    else
        std::cout << "Stack is EMPTY" << std::endl;
}


template<class t>
void dblStack<t>::printRecursive(dblStack::node *n)
{
    if(n)
    {
        std::cout << n -> data << std::endl;
        //printRecursive(n -> next);
        printRecursive(n -> prev);
        
    }

        
}


template<class t>
dblStack<t>::~dblStack<t>()
{
    node* temp;
    while (top != NULL)
    {
        temp = top -> next;
        delete top;
        top = nullptr;
        top = temp;
    }
    
    std::cout << "STACK DELETED." << std::endl;
}




