//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//singleLinkStack.cpp: Implementation of stack with singly-linked list. Notice printRecursive method. 

#include "singleLinkStack.h"
#include "DblLinkStack.h"
#include <iostream>

template<class t>
singleStack<t>::singleStack() : top(NULL) {}


template<class t>
bool singleStack<t>::push(const t &aItem)
{
    curr = new node;
    curr -> data = aItem;
    curr -> next = top;
    top = curr;
    return true;

}


template<class t>
void singleStack<t>::peek()
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
bool singleStack<t>::pop()
{
    bool popSuccess;

    if (top != NULL)
    {
        curr = top -> next;
        node* nodeToPop = new node;
        top = nodeToPop;
        
        nodeToPop -> next = nullptr;
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
void singleStack<t>::printLink()
{
    top = curr;
    if (top != NULL)
    {
    printRecursive(top);
    }
    else
        std::cout << "Stack is EMPTY" << std::endl;
}

template<class t>
void singleStack<t>::printRecursive(singleStack::node *n)
{
    if(n)
    {
        std::cout << n -> data << std::endl;
        printRecursive(n -> next);
    }
}
    


template<class t>
singleStack<t>::~singleStack()
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




