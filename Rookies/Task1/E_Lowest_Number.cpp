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
    int smallest = nums[0];
    int idx = 1;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] < smallest)
        {
            smallest = nums[j];
            idx = j + 1;
        }
    }
    cout << smallest << " " << idx;
    return 0;
}