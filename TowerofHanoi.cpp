

//
//  main.cpp
//  Chapter_2_Recursion
//
//  Created by Paul Laliberte on 7/11/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//

#include <iostream>
using namespace std;

void solveTowersproblem(int count, char source, char destination, char spare, int *move)
{
    if (count == 1)
    {
        cout << "Move top disk from pole " << source << " to pole " << destination << endl;
        *move += 1;
    }
    else
    {
        solveTowersproblem(count - 1, source, spare, destination, move);
        solveTowersproblem(1, source, destination, spare, move);
        solveTowersproblem(count - 1, spare, destination, source, move);
    }
}

int main()
{
    int discs;
    cout << "How many disc(s) should we play the game with? ";
    cin >> discs;
    
    int number_of_moves;
    
    
    char towerA, towerB, towerC;
    towerA = 'A';
    towerB = 'B';
    towerC = 'C';
    solveTowersproblem(discs, towerA, towerB, towerC, &number_of_moves);
    cout << "Total number of moves: " << number_of_moves << endl;
}

