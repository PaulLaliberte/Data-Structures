//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//singleQ.h: Header file for a queue that is implemented using a singly-linked list. Notice that there is not a counter
//because it printing does not depend on how many items are in the queue but whether front is NULL. 

#ifndef __DoublyLinkedList__singleQ__
#define __DoublyLinkedList__singleQ__

template<class t>
class singleQueue
{
private:
    struct node
    {
        node *next;
        t data;
    };
    
    node *front, *back;
    
public:
    singleQueue();
    bool isEmpty();
    bool enqueue(const t& aIteam);
    void toFront();
    bool dequeue();
    void peekFront();
    void printLink();
    void printRecursive(node* n);
    virtual ~singleQueue();
    
};

#endif
