#include <bits/stdc++.h>
#include <string>
#define int long long

using namespace std;

int32_t main()
{

    string s;
    cin >> s;
    bool isPalindrome = true;
    for (int j = 0; j < s.size() / 2; j++)
    {
        if (s.at(j) != s.at(s.size() - 1 - j))
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}