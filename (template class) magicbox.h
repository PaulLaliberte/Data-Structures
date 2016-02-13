
//
//  MagicBox.h
//  Class_Template
//
//  Created by Paul Laliberte on 7/11/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#ifndef MagicBox_h
#define MagicBox_h
#include "box.h"

template <class itemtype>
class magicbox : public hopefulbox<itemtype>
{
private:
    bool firstitemstored;
    
public:
    magicbox();
    magicbox(const itemtype& theitem);
    void setitem(const itemtype& theitem);

};


#endif

