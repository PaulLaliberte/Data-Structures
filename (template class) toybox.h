```cpp
//
//  ToyBox.h
//  Class_Template
//
//  Created by Paul Laliberte on 7/11/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#ifndef ToyBox_h
#define ToyBox_h
#include "box.h"

enum Color {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};

template<class itemtype>
class ToyBox : public hopefulbox<itemtype>
{
private:
    Color boxColor;
    
public:
    ToyBox();
    ToyBox(const Color& theColor);
    ToyBox(const itemtype& theitem, const Color& theColor);
    Color getColor() const;
};

#endif
```
