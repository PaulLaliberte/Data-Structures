//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//DblLinkStack.h: Header file for a stack this implemented with a doubly linked list. 

#ifndef __DoublyLinkedList__DblLink__
#define __DoublyLinkedList__DblLink__

template<class t>
class dblStack
{
private:
    struct node
    {
        node *next, *prev;
        t data;
    };
    
    node *top, *btm;
    
public:
    dblStack();
    bool push(const t& aIteam);
    bool pop();
    void peek();
    void print();
    void printRecursive(node* n);
    virtual ~dblStack();
    
};

#endif /* defined(__DoublyLinkedList__DblLink__) */
