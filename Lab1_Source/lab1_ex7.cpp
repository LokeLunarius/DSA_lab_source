#include <iostream>
using namespace std;

void printPattern_2(int n, int i, bool rise)
{
    if (i > 0 && !rise)
    {
        cout << i << " ";
        return printPattern_2(n, i - 5, rise);
    }
    else if (i > 0 && rise)
    {
        if (i == n)
        {
            cout << i;
            return;
        }
        cout << i << " ";
        return printPattern_2(n, i + 5, rise);
    }
    else if (i <= 0)
    {
        cout << i << " ";
        rise = true;
        return printPattern_2(n, i + 5, rise);
    }
}

void printPattern(int n)
{
    /*
     * STUDENT ANSWER
     */
    int i = n;
    bool rise = false;
    printPattern_2(n, i, rise);
}


int main()
{
    printPattern(14);
    cout << endl;
    printPattern(9);
    cout << "a";
    cout << endl;
    printPattern(20);

}

