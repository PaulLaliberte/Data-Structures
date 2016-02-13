
#include "stack.h"
#include "stack.cpp"
#include <iostream>
#include <string>

using namespace std;



int main()
{
    stack<int> intStack;
    intStack.push(100);
    intStack.pop();
    intStack.push(12);
    intStack.push(10);
    intStack.peek();
    intStack.pop();
    intStack.peek();
    
    cout << endl;
    cout << endl;
    
    stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("everyone");
    stringStack.pop();
    stringStack.peek();
    stringStack.pop();
    stringStack.peek();
    stringStack.peek();
    stringStack.pop();
    
    cout << endl;
    cout << endl;
    
    stack<double> doubleStack;
    doubleStack.push(33.3);
    doubleStack.peek();
    doubleStack.push(22.5);
    doubleStack.peek();
    
    //Cannot add because of bool, switch to itemtype to add. 
    
}

