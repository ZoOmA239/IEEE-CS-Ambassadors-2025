#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{

    int n;
    int min_index;

    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int j = 0; j < n - 1; j++)
    {
        min_index = j;

        for (int k = j + 1; k < n; k++)
        {
            if (nums[k] < nums[min_index])
            {
                min_index = k;
            }
        }
        swap(nums[min_index], nums[j]);
    }

    for (int z = 0; z < n; z++)
    {
        cout << nums[z] << " ";
    }

    return 0;
}