
//
//  bag_class.cpp
//  ADT Bag
//
//  Created by Paul Laliberte on 7/7/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include "bag.h"
#include <iostream>

Bag::Bag() //Constructor
{
    count = 0;
}

//Bag::Bag(int a) //*
//{
//    count = 0;
//}

void Bag::clear() //clear the bag
{
    count = 0;
}

bool Bag::insert(bag_type value) //Place a value in Bag
{
    bool reply;
    if(count < 100)
    {
        data[count] = value;
        reply = true;
        count++;
    }
    else
        reply = false;
    return reply;
}

int Bag::size() //How many elements in bag?
{
    return count;
}

