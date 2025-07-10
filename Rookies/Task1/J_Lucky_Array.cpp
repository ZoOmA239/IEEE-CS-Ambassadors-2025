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
    int smallest = LLONG_MAX;

    for (int j = 0; j < n; j++)
    {
        smallest = min(smallest, nums[j]);
    }

    int counter = 0;
    for (int j = 0; j < n; j++)
    {
        if (smallest == nums[j])
        {
            counter++;
        }
    }
    if (counter % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }

    return 0;
}