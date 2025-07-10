#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int n;
    cin >> n;
    string value;
    cin >> value;
    int sum = 0;

    for (int i = 0; i < value.size(); i++)
    {
        sum += value[i] - '0';
    }

    cout << sum << " ";

    return 0;
}