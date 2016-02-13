```cpp

#include <iostream>
#include "box.h"

template <class itemtype>
hopefulbox<itemtype>::hopefulbox()
{
}

template <class itemtype>
hopefulbox<itemtype>::hopefulbox(const itemtype& theitem)
{
    item = theitem;
}

template <class itemtype>
void hopefulbox<itemtype>::setitem(const itemtype& theitem)
{
    item = theitem;
    //std::cout << item << std::endl;
}

template <class itemtype>
itemtype hopefulbox<itemtype>::getitem() const
{
    return item;

}
```
