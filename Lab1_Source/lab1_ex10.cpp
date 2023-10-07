#include <iostream>
using namespace std;

int strLen_2(char* str, int idx)
{
    if (str[idx] == '\0')
    {
        return idx;
    }
    return strLen_2(str, idx + 1);
}

int strLen(char* str)
{
    /*
     * STUDENT ANSWER
     */
    int idx = 0;
    return strLen_2(str, idx);
}

int main()
{
    char str[] = "Truong DH Bach Khoa";
    cout << strLen(str);

    cout << endl;

    char str_1[] = "";
    cout << strLen(str_1);

}

