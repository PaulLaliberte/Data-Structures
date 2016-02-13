```cpp
//
//  stack.h
//  Chapter6_Stack
//
//  Created by Paul Laliberte on 7/23/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#ifndef Chapter6_Stack_stack_h
#define Chapter6_Stack_stack_h
#include "stackInterface.h"

static const int MAX_STACK = 40;

template <class ItemType>
class stack : public StackInterface<ItemType>
{
private:

    ItemType aStack[MAX_STACK];
    int top;

public:
    stack();
    bool isEmpty() const;
    bool push(const ItemType& newEntry);
    bool pop();
    void peek() const;
};



#endif

```
