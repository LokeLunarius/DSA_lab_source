#include <iostream>
using namespace std;

void printArray_2(int n, int i)
{
    if (n > 0)
    {
        cout << i << " ,";
        return printArray_2(n-1, i+1);
    }
    cout << i;
}

void printArray(int n)
{
    /*
     * STUDENT ANSWER
     */
    int i = 0;
    printArray_2(n, i);
}

int main()
{
    printArray(5);
    cout << "\n";
    printArray(17);
    cout << "a";
}

