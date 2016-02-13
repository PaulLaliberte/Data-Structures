```cpp
//
//  test.cpp
//  Ch1_Classes
//
//  Created by Paul Laliberte on 7/9/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include <iostream>
#include "PlainBox.h"

int main()
{
    double health = 10.5;
    PlainBox newbox(&health);
    newbox.setItem(&health);
    newbox.getItem();
}
```
