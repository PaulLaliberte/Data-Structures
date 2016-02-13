//  Created by Paul Laliberte on 7/30/15.
//  Copyright (c) 2015 Paul Laliberte. All rights reserved.
//  Professor Osbourne

//main.cpp: This is my test file, which also contains my display functions. I could have created a new source file thats only
//purpose would be to run the display files, but declaring the functions at the top and then my main, followed by the
//display functions should make things easier to follow. I collapse the actual display functions which makes it much
//easier to follow.
//NOTICE the grabage collection (destructor) is called in each display function if option 4 is chosen. It will also
//output that the stack/queue is deleted when option 4 is chosen from the options too.

#include "arrayStack.h"
#include "arrayStack.cpp"
#include "singleLinkStack.h"
#include "singleLinkStack.cpp"
#include "DblLinkStack.h"
#include "DblLinkStack.cpp"
#include "arrayQ.h"
#include "arrayQ.cpp"
#include "singleQ.h"
#include "singleQ.cpp"
#include "doubleQ.h"
#include "doubleQ.cpp"
#include <iostream>

using namespace std;

void DisplayStackArray(ArrayStack<int> ArrayStake);
void Display_S_Link(singleStack<int> singleStack);
void Display_DBL_Link(dblStack<int> dblstack);
void DisplayQueueArray(queueArray<int> arrayQueue);
void Display_S_Queue(singleQueue<int> qSingle);
void Display_DBL_Queue(doubleQueue<int> qDouble);



int main()
{
    int answer;
    cout << "1. Create Stack\n" << "2. Create Queue\n" << "3. Exit Program" << endl;
    cin >> answer;
    cout << endl;
    
    if (answer == 1)
    {
        int answer2;
        cout << "1. Arrays\n" << "2. Singly Linked Lists\n" << "3. Doubly Linked List" << endl;
        cin >> answer2;
        if (answer2 == 1)
        {
            ArrayStack<int> intStack;
            DisplayStackArray(intStack);
        }
        else if (answer2 == 2)
        {
            singleStack<int> singleStack;
            Display_S_Link(singleStack);
        }
        else if (answer2 == 3)
        {
            dblStack<int> aStack;
            Display_DBL_Link(aStack);
        }
        else
        {
            cout << "Invalid answer... exiting." << endl;
            exit(0);
        }
        
    }
    else if (answer == 2)
    {
        int answer2;
        cout << "1. Arrays\n" << "2. Singly Linked Lists\n" << "3. Doubly Linked List" << endl;
        cin >> answer2;
        if (answer2 == 1)
        {
            queueArray<int> qArray;
            DisplayQueueArray(qArray);
        }
        else if (answer2 == 2)
        {
            singleQueue<int> qSingle;
            Display_S_Queue(qSingle);
        }
        else if (answer2 == 3)
        {
            doubleQueue<int> qDouble;
            Display_DBL_Queue(qDouble);
        }
        else
        {
            std::cout << "Invalid answer... exiting" << std::endl;
            exit(0);
        }
        
    }
}


//Collapsing functions below makes it easier to read. 


void DisplayStackArray(ArrayStack<int> ArrayStack)
{
    int answer3;
    cout << "(1) PUSH\n" << "(2) POP\n" << "(3) PRINT STACK\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToPush;
            
            cout << "Enter integer to be pushed: ";
            cin >> intToPush;
            ArrayStack.push(intToPush);
            cout << endl;
            DisplayStackArray(ArrayStack);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer on top: ";
            ArrayStack.peek();
            cout << "Popping now." << endl;
            ArrayStack.pop();
            cout << endl;
            DisplayStackArray(ArrayStack);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing Stack: " << endl;
            ArrayStack.print();
            cout << endl;
            DisplayStackArray(ArrayStack);
        }
    }
    else if (answer3 == 4)
    {
        ArrayStack.~ArrayStack();
        exit(1);
    }
}

void Display_S_Link(singleStack<int> singleStack)
{
    int answer3;
    cout << "(1) PUSH\n" << "(2) POP\n" << "(3) PRINT STACK\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToPush;
            
            cout << "Enter integer to be pushed: ";
            cin >> intToPush;
            singleStack.push(intToPush);
            cout << endl;
            Display_S_Link(singleStack);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer on top: ";
            singleStack.peek();
            cout << "Popping now." << endl;
            singleStack.pop();
            cout << endl;
            Display_S_Link(singleStack);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing Stack: " << endl;
            singleStack.printLink();
            cout << endl;
            Display_S_Link(singleStack);
        }
    }
    else if (answer3 == 4)
    {
        singleStack.~singleStack();
        exit(1);
    }
}

void Display_DBL_Link(dblStack<int> dblStack)
{
    int answer3;
    cout << "(1) PUSH\n" << "(2) POP\n" << "(3) PRINT STACK\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToPush;
            
            cout << "Enter integer to be pushed: ";
            cin >> intToPush;
            dblStack.push(intToPush);
            cout << endl;
            Display_DBL_Link(dblStack);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer on top: ";
            dblStack.peek();
            cout << "Popping now." << endl;
            dblStack.pop();
            cout << endl;
            Display_DBL_Link(dblStack);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing Stack: " << endl;
            dblStack.print();
            cout << endl;
            Display_DBL_Link(dblStack);
        }
    }
    else if (answer3 == 4)
    {
        dblStack.~dblStack();
        exit(1);
    }
}

void DisplayQueueArray(queueArray<int> arrayQueue)
{
    int answer3;
    cout << "(1) ENQUEUE\n" << "(2) DEQUEUE\n" << "(3) PRINT QUEUE\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToEnqueue;
            
            cout << "Enter integer to be enqueued: ";
            cin >> intToEnqueue;
            arrayQueue.enqueue(intToEnqueue);
            cout << endl;
            DisplayQueueArray(arrayQueue);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer in front: ";
            arrayQueue.frontPeek();
            cout << "dequeue now." << endl;
            arrayQueue.dequeue();
            cout << endl;
            DisplayQueueArray(arrayQueue);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing queue: " << endl;
            arrayQueue.print();
            cout << endl;
            DisplayQueueArray(arrayQueue);
        }
    }
    else if (answer3 == 4)
    {
        arrayQueue.~queueArray();
        exit(1);
    }
}

void Display_S_Queue(singleQueue<int> qSingle)
{
    int answer3;
    cout << "(1) ENQUEUE\n" << "(2) DEQUEUE\n" << "(3) PRINT QUEUE\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToEnqueue;
            
            cout << "Enter integer to be enqueued: ";
            cin >> intToEnqueue;
            qSingle.enqueue(intToEnqueue);
            cout << endl;
            Display_S_Queue(qSingle);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer in front: ";
            qSingle.peekFront();
            cout << "dequeue now." << endl;
            qSingle.dequeue();
            cout << endl;
            Display_S_Queue(qSingle);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing queue: " << endl;
            qSingle.printLink();
            cout << endl;
            Display_S_Queue(qSingle);
        }
    }
    else if (answer3 == 4)
    {
        qSingle.~singleQueue();
        exit(1);
    }

}

void Display_DBL_Queue(doubleQueue<int> qDouble)
{
    int answer3;
    cout << "(1) ENQUEUE\n" << "(2) DEQUEUE\n" << "(3) PRINT QUEUE\n" << "(4) Exit Program\n";
    cin >> answer3;
    
    if (answer3 == 1)
    {
        while (answer3 == 1)
        {
            int intToEnqueue;
            
            cout << "Enter integer to be enqueued: ";
            cin >> intToEnqueue;
            qDouble.enqueue(intToEnqueue);
            cout << endl;
            Display_DBL_Queue(qDouble);
        }
        
    }
    else if (answer3 == 2)
    {
        while (answer3 == 2)
        {
            cout << "Integer in front: ";
            qDouble.peekFront();
            cout << "dequeue now." << endl;
            qDouble.dequeue();
            cout << endl;
            Display_DBL_Queue(qDouble);
        }
    }
    else if (answer3 == 3)
    {
        while (answer3 == 3)
        {
            cout << "Printing queue: " << endl;
            qDouble.printLink();
            cout << endl;
            Display_DBL_Queue(qDouble);
        }
    }
    else if (answer3 == 4)
    {
        qDouble.~doubleQueue();
        exit(1);
    }

}




















