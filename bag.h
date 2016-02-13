```cpp
//
//  bag.h
//  ADT Bag - Header File
//* notes from class added in


#ifndef _BAG_
#define _BAG_

typedef int bag_type; //define an int bag type

class Bag {
private:
    int count;         //members in a bag
    bag_type data[100]; //creates an array bag of 20 ints
    
public:
    Bag();     //Constructor
//  Bag(int a);              //*Constructor for a bag with members already in it
    bool insert(bag_type);     //Put a member in the bag
    int size();                //number of members in a bag
    void clear();              //remove all members from bag
};
#endif
```
