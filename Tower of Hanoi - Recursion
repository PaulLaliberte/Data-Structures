```cpp

//
//  main.cpp
//  Chapter_2_Recursion
//
//  Created by Paul Laliberte on 7/11/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include <iostream>
using namespace std;

void solveTowersproblem(int count, char source, char destination, char spare)
{
    if (count == 1)
    {
        cout << "Move top disk from pole " << source << " to pole " << destination << endl;
    }
    else
    {
        solveTowersproblem(count - 1, source, spare, destination);
        solveTowersproblem(1, source, destination, spare);
        solveTowersproblem(count - 1, spare, destination, source);
    }
}

int main()
{
    int discs;
    cout << "How many disc(s) should we play the game with? ";
    cin >> discs;
    
    char towerA, towerB, towerC;
    towerA = 'A';
    towerB = 'B';
    towerC = 'C';
    solveTowersproblem(discs, towerA, towerB, towerC);
}
```
