

#include <iostream>
#include <string>
#include "box.h"
#include "box.cpp"
#include "ToyBox.h"
#include "ToyBox.cpp"
#include "MagicBox.h"
#include "MagicBox.cpp"


int main()
{
    hopefulbox<double> numberbox;
    double health = 6.5;
    numberbox.setitem(health);
    std::cout << numberbox.getitem() << std::endl;
    
    hopefulbox<std::string> namebox;
    std::string name = "Paul";
    namebox.setitem(name);
    std::cout << namebox.getitem() << std::endl;
    
    hopefulbox<int> wholenumberbox;
    int wholenumber = 200;
    wholenumberbox.setitem(wholenumber);
    std::cout << wholenumberbox.getitem() << std::endl;
    
    std::string favoritetoy = "Jack-in-the-Box";
    ToyBox<std::string> myToyCase(favoritetoy, RED);
    std::string oldToy = myToyCase.getitem();
    favoritetoy = "Spinning Top";
    myToyCase.setitem(favoritetoy);
    std::cout << oldToy << std::endl;
    std::cout << myToyCase.getitem()<< std::endl;
    
    
    std::string rabbit = "rabbit";
    std::string wand = "wand";
    magicbox<std::string> magicHat;
    magicHat.setitem(rabbit);
    std::cout << magicHat.getitem() << std::endl;
    magicHat.setitem(wand);
    std::cout << magicHat.getitem() << std::endl;
    
    
    return 0;
    
}

