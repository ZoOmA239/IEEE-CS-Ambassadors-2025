#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string sequence = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == sequence[j])
        {
            j++;
        }
        if (j == sequence.size())
        {
            break;
        }
    }

    if (j == sequence.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
