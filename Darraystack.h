//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne


//arrayStack.h: A header file for a stack that us implemented with an array. The array will always be able to double in size
//if it becomes full. Used template classes because I did not realize we were only storing ints until it would end up being
//more work to delete all the templates than it would to just leave them.

#ifndef __Chapter7_ArrayStack
#define __Chapter7_ArrayStack

template <class t>
class ArrayStack {
private:
    int MAX_CAPACITY = 2;      //NOTICE capacity is set at 2.
    t* item;
    int top;
    
    
public:
    
    ArrayStack();
    bool isEmpty();
    bool push(const t& aItem);
    void DBLarray();            //Doubles array size everytime stack fills up.
    bool pop();
    void print();
    void peek();
    virtual ~ArrayStack();
};

#endif /* defined(__Chapter7_ArrayStack__ArrayBag__) */
