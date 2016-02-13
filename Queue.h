//
//  queue.h
//  Final_Work
//
//  Created by Paul Laliberte on 8/6/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

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
    t peekFront();
    void printLink();
    void printRecursive(node* n);
    virtual ~singleQueue();
    
};

#endif
