```cpp
//
//  StackInterface.h
//  Chapter6_Stack
//
//  Created by Paul Laliberte on 7/23/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.


#ifndef Chapter6_Stack_StackInterface_h
#define Chapter6_Stack_StackInterface_h

template<class ItemType>
class StackInterface
{
public:
    virtual bool isEmpty() const = 0;
    
    virtual bool push(const ItemType& newEntry) = 0;
    
    virtual bool pop() = 0;
    
    virtual void peek() const = 0;
};

#endif
```
