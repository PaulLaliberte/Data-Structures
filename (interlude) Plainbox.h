```cpp
//
//  PlainBox.h
//  Ch1_Classes
//
//  Created by Paul Laliberte on 7/9/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#ifndef _PLAINBOX_
#define _PLAINBOX_

typedef double ItemType;

class PlainBox
{
private:
    ItemType item;
    
public:
    PlainBox();
    PlainBox(const ItemType *theItem);
    void setItem(const ItemType *theItem);
    ItemType getItem() const;
};

#endif
```
