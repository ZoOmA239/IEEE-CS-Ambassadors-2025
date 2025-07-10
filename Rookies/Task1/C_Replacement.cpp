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
    for (int j = 0; j < n; j++)
    {
        if (nums[j] > 0)
        {
            nums[j] = 1;
        }
        else if (nums[j] < 0)
        {
            nums[j] = 2;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << nums[k] << " ";
    }

    return 0;
}
