

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int n;

    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int minimum = nums[0];
    int maximum = nums[n - 1];
    int minIdx = 0;
    int maxIdx = 0;
    for (int j = 0; j < n; j++)
    {
        minimum = min(nums[j], minimum);
        maximum = max(nums[j], maximum);
        if (nums[j] == minimum)
            minIdx = j;

        if (nums[j] == maximum)
            maxIdx = j;
    }

    swap(nums[minIdx], nums[maxIdx]);
    for (int j = 0; j < n; j++)
    {
        cout << nums[j] << " ";
    }

    return 0;
}
