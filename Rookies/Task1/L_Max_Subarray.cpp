#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;
        int nums[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int l = 0, r = 0;

        while (l < n)
        {
            r = l;
            int maximum = nums[l];
            while (r < n)
            {
                maximum = max(maximum, nums[r]);
                cout << maximum << " ";
                r++;
            }
            l++;
        }
        cout << endl;
    }

    return 0;
}