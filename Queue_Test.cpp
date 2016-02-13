//
//  main.cpp
//  Final_Work
//
//  Created by Paul Laliberte on 8/5/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//


#include "queue.h"
#include "queue.cpp"
#include <iostream>
#include <locale>
using namespace std;


size_t counter()
{
    size_t answer = 0;
    singleQueue<char> q;
    string input;
    cout << "Enter line of input: ";
    cin >> input;                      //cin line
    
    
    int i = 0;
    long inputLength = input.length();   //get length of line and declare
    char characterAtEnd;                 //variable that holds end character
    
    for (int u = 0; u < inputLength; u++) //convert line to uppercase,
        input[u] = toupper(input[u]);     //just to be safe
    
    while (i < inputLength - 1)  //put each character into a queue,
    {                            //stop before last character.
        q.enqueue(input[i]);
        i++;
    }
    
    characterAtEnd = input[i];  //put last character into
    q.enqueue(input[i]);        //characterAtEnd variable
                                //put last character into queue.
    for (int a = 0; a < inputLength; a++)   //interate through queue
    {
        char dequeChar;
        dequeChar = q.peekFront();          //store copy of char that is going
        q.dequeue();                        //to be dequeued;
        if (dequeChar == characterAtEnd)    //if dequeueChar is equal to
            answer = answer + 1;            //characterAtEnd then add
    }                                       //to answer

    return answer;                          //return answer
}



int main()
{
    size_t answer;
    answer = counter();
    cout << "Number of times last character appears: " << answer << endl;
}
