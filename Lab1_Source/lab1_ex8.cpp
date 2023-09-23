#include <iostream>
using namespace std;

int findMax_2(int* arr, int length, int max)
{
    if (length == 0)
    {
        return max;
    }
    if (*arr > max)
    {
        max = *arr;
    }
    return findMax_2((arr + 1), length - 1, max);
}

int findMax(int* arr, int length)
{
    /*
     * STUDENT ANSWER
     */
    int max = 0;
    max = findMax_2(arr, length, max);
    return max;
}


int main()
{
    int arr_1[] = { 10, 5, 7, 9, 15, 6, 11, 8, 12, 2 };
    cout << findMax(arr_1, 10);
    cout << endl;
    int arr_2[] = { 10, -1, -150, 200 };
    cout << findMax(arr_2, 4);
    cout << endl;
    int arr_3[] = { 24,0,88,-59,-54,13,20,-11,22,-48,5,22,-40,-26,-97,88 };
    cout << findMax(arr_3, 16);
    cout << endl;
}

