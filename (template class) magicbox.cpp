
#include "MagicBox.h"


template<class itemtype>
magicbox<itemtype>::magicbox()
{
    hopefulbox<itemtype>();
    firstitemstored = false;
}


template<class itemtype>
magicbox<itemtype>::magicbox(const itemtype& theitem)
{
    firstitemstored = false;
    setitem(theitem);
}


template<class itemtype>
void magicbox<itemtype>::setitem(const itemtype& theitem)
{
    if (!firstitemstored)
    {
        hopefulbox<itemtype>::setitem(theitem);
        firstitemstored = true;
    }
}
