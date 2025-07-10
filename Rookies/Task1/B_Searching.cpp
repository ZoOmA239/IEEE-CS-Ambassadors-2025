#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int n;
    int x;
    int ans = -1;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> x;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] == x)
        {
            ans = j;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
