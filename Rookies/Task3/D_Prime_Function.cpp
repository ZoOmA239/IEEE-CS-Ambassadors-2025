#include <bits/stdc++.h>
#include <string>
#define int long long

using namespace std;
void prime(int num)
{
    if (num < 2)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int32_t main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int num;
        cin >> num;
        prime(num);
    }

    return 0;
}