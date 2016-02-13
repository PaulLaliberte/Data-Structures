
//
//  Plainbox.cpp
//  Ch1_Classes
//
//  Created by Paul Laliberte on 7/9/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//
#include "PlainBox.h"
#include <iostream>


PlainBox::PlainBox()
{
    
}

PlainBox::PlainBox(const ItemType *theItem)
{
    //item = 0;
    //std::cout << item << std::endl;
    item = *theItem;
}

void PlainBox::setItem(const ItemType *theItem)
{
    //std::cout << item << std::endl;
    item = *theItem;
}

ItemType PlainBox::getItem() const
{
    std::cout << item << std::endl;
    return item;
}

