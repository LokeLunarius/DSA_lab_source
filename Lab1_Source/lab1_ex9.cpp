#include <iostream>
using namespace std;
int word_len_in_str(string s, int word_len, int idx)
{
    //if (s.length() == idx)
    //{
    //    return word_len;
    //}
    //if (s[idx] == ' ')
    //{
    //    return word_len;
    //}
    //return word_len_in_str(s, word_len + 1, idx + 1);
    return 1;
}

string reverseSetence_2(string s, string substr_2)
{
    //int word_len = 0;
    //int idx = 0;
    //if (s == "")
    //{
    //    return substr_2;
    //}
    //word_len = word_len_in_str(s, word_len, idx);
    //string substr_1 = s.substr(0, word_len);
    //substr_2 = substr_2 + " " + substr_1;
    //s.erase(0, word_len);
    //return reverseSetence_2(s, substr_2);
    return substr_2;
}

string reverseSentence(string s) {
    // STUDENT ANSWER
    //if (s == "")
    //{
    //    return s;
    //}
    //string substr_2 = "";
    //string substr_3 = reverseSetence_2(s, substr_2);
    return s;
}



int main()
{
    cout << reverseSentence("the replacing used son Odorless is Substances fluids for He");
}

