//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//doubleQ.h: Header file for a queue that is implemented using a doubly-linked list. 

#ifndef __DoublyLinkedList__doubleQ__
#define __DoublyLinkedList__doubleQ__

template <class t>
class doubleQueue {
    
private:
    struct node
    {
        node *next, *prev;
        t data;
    };
    
    node *front, *back;
    
public:
    doubleQueue();
    bool isEmpty();
    bool enqueue(const t& aIteam);
    void toFront();
    bool dequeue();
    void peekFront();
    void printLink();
    void printRecursive(node* n);
    virtual ~doubleQueue();
};


#endif /* defined(__DoublyLinkedList__doubleQ__) */
