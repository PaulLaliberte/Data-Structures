
#include "ToyBox.h"
#include <iostream>


//Defualt Constructor
template<class itemtype>
ToyBox<itemtype>::ToyBox()
{
    hopefulbox<itemtype>();
    boxColor = BLACK;
}


//Constructor
template<class itemtype>
ToyBox<itemtype>::ToyBox(const Color& theColor)
{
    hopefulbox<itemtype>();
    boxColor = theColor;
}


template<class itemtype>
ToyBox<itemtype>::ToyBox(const itemtype& theitem, const Color& theColor)
{
    hopefulbox<itemtype>();
    hopefulbox<itemtype>::setitem(theitem);
    boxColor = theColor;
}

template<class itemtype>
Color ToyBox<itemtype>::getColor() const
{
    return boxColor;
}

