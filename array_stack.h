
//
//  ArrayBag.h
//  Chapter7_ArrayStack
//
//  Created by Paul Laliberte on 7/28/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#ifndef __Chapter7_ArrayStack__ArrayBag__
#define __Chapter7_ArrayStack__ArrayBag__

template <class type>
class ArrayStack {
private:
    static const int MAX_CAPACITY = 12;
    int top;
    type item[MAX_CAPACITY];
    
public:
    ArrayStack();
    bool isEmpty();
    bool push(const type& aItem);
    bool pop();
    void peek();
};

#endif /* defined(__Chapter7_ArrayStack__ArrayBag__) */


