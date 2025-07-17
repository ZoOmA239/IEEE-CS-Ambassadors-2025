#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;

        if (s1.size() >= s2.size())
        {
            for (int i = 0; i < s2.size(); i++)
            {
                cout << s1[i] << s2[i];
            }
            cout << s1.substr(s2.size(), s1.size() - s2.size());
        }
        else
        {
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i] << s2[i];
            }
            cout << s2.substr(s1.size(), s2.size() - s1.size());
        }
        cout << endl;
    }

    return 0;
}
