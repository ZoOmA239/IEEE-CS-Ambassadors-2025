
#include <bits/stdc++.h>
using namespace std;

bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

int main()
{
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    if (s.size() != n + m + 1)
    {
        cout << "No" << endl;
        return 0;
    }

    if (s[n] != '-')
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i == n)
            continue;
        if (!isDigit(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
