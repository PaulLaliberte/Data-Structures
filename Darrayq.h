//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//arrayQ.h: Header file for a queue that is implemented with an array. Almost identical to stack besides an added
//counter variable, that is most neccessary, but helps make implementation (printing especially) easier to follow.
//This array also doubles each time it is full.

#ifndef Queue_Array
#define Queue_Array

template <class t>
class queueArray {
private:
    int MAX_CAPACITY = 2;
    t* item;
    int front, placeHolder, counter;
    
    
public:
    
    queueArray();
    bool isEmpty();
    bool enqueue(const t& aItem);
    void DBLarray();                  //Doubles array size everytime stack fills up.
    bool dequeue();
    void print();
    void frontPeek();
    virtual ~queueArray();
};

#endif
