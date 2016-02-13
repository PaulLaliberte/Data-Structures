//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//singleLinkStack.h: Header file for a stack that is implemented using a singly-linked list. Node Struct is implemented within
//class.

#ifndef __DoublyLinkedList__singleLinkStack__
#define __DoublyLinkedList__singleLinkStack__

template<class t>
class singleStack
{
private:
    struct node
    {
        node *next;
        t data;
    };
    
    node *top, *curr;
    
public:
    singleStack();
    bool push(const t& aIteam);
    bool pop();
    void peek();
    void printLink();
    void printRecursive(node* n);
    virtual ~singleStack();
    
};

#endif /* defined(__DoublyLinkedList__singleLinkStack__) */
