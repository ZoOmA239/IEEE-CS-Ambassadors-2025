#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    string s;
    cin >> s;

    while (Q--)
    {
        string type;
        cin >> type;

        if (type == "pop_back")
        {
            s.pop_back();
        }
        else if (type == "front")
        {
            cout << s.front() << endl;
        }
        else if (type == "back")
        {
            cout << s.back() << endl;
        }
        else if (type == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (type == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (type == "print")
        {
            int i;
            cin >> i;
            cout << s[i - 1] << endl;
        }
        else if (type == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (type == "push_back")
        {
            char j;
            cin >> j;
            s.push_back(j);
        }
    }

    return 0;
}
