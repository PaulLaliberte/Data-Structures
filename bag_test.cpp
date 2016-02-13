
//
//  bag_test.cpp
//  ADT Bag
//
//  Created by Paul Laliberte on 7/7/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.

#include <iostream>
#include <cstdlib>
#include "bag.h"

using namespace std;

int main()
{
    Bag b;
//  Bag a(10); //*
    bag_type value;
    
    cout << "Let's create a bag with only one element: " << endl;
    b.insert(5); //inserts one element into the bag
    cout << b.size() << " element(s) in bag the bag." << endl;
    b.clear();
    cout << b.size() << " element(s) in the bag after b.clear()." << endl;
    
    do {
        value = rand() % 6 + 1;
    } while(b.insert(value));
    cout << b.size() << " element(s) in the bag." << endl;
    b.clear();
    cout << b.size() << " element(s) in the bag after b.clear()." << endl;
}

