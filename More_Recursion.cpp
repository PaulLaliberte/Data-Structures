```cpp
#include <iostream>
using namespace std;

//Book Example

int sumUpTo(int n)
{
    int sum = 0;
    if (n==1)
    {
        sum = 1;
        cout << sum << endl;
    }
    else
    {
        sum = n + sumUpTo(n-1);
        cout << sum << endl;
    }
    
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sumUpTo(n);
}




//Homework Problem
void recursion(int n)
{
    if (n==10)
    {
        cout << n << endl;
    }
    else
    {
        cout << n << endl;
        n++;
        recursion(n);
    }
}



int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    recursion(n);
}



//String Recursion Examples From Book
#include <string>
using namespace std;

void writeBackwards(string s)        //Write backwards using the last letter.
{
    int length = s.size();
    
    if (length > 0)
    {
        cout << s.substr(length - 1, 1);           //writes last character
        writeBackwards(s.substr(0, length - 1));   //substr: (index and how far)
    }
    else if (length == 0)
        exit(1);
}

//void writeBackwards2(string s)        //Write backwards using first letter.
//{
//    int length = s.size();
//    
//    if (length == 0)
//        exit(1);
//    else if (length > 0)
//    {
//        writeBackwards2(s.substr(1, length - 1));
//        cout << s.substr(length - 3, 0);
//    }
//}


int main()
{
    string name = "cat";
    writeBackwards(name);
//    writeBackwards2(name);
}



//Recursion w/ Array

void writeArrayBackward(const char anArray[], int first, int last)
{
    if (first <= last)
    {
        cout << anArray[last];
        writeArrayBackward(anArray, first, last -1);
    }
    else
        exit(1);
}


int main()
{
    char array[] = "abc";
    writeArrayBackward(array, 0, 3);
}




//The Binary Search
int binarySearch(const int anArray[], int first, int last, int target)
{
    int i;
    if (first > last)
    {
        i = -1;
        cout << "NOT IN ARRAY." << endl;
    }
    else{
        int mid = first + (last - first) / 2;
        if (target == anArray[mid])
        {
            i = mid;
        }
        else if (target < anArray[mid])
        {
            i = binarySearch(anArray, first, mid - 1, target);
        }
        else
        {
            i = binarySearch(anArray, mid + 1, last, target);
        }
    }
    return i;
}


int main()
{
    
    int our_array[] = {11, 25, 27, 56, 61, 72, 77, 79, 91};
    cout << "The target is located at array position: " << binarySearch(our_array, 0, 9, 27);
}




//LargestValueSearch
/*If (anArray has only on entry)
     maxArray(anArray) is the entry in anArray
  else if (anArray has more than one entry)
     maxArray(anArray) is the maximum of
        maxArray(left half of anArray) and maxArray(right half of array)
 */
int largestValue(int anArray[], int start, int finish)
{
    int max;
    if (start == finish)
    {
        max = start;
        return max;
    }
    else
    {
        max = largestValue(anArray, start+1, finish);
        if (anArray[start] > max)
            return anArray[start];
        else
            return max;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element in array: ";
        cin >> array[i];
    }
    
    cout << "Largest element in your array is: ";
    cout << largestValue(array, 0, size-1);
}
```
