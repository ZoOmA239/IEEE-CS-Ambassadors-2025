#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word = "";

    for (char c : s)
    {
        if (c == ' ')
        {
            reverse(word.begin(), word.end());
            cout << word << ' ';
            word = "";
        }
        else
        {
            word += c;
        }
    }

    reverse(word.begin(), word.end());
    cout << word << endl;

    return 0;
}
