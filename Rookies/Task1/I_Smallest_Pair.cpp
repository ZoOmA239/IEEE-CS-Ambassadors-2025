// #include <bits/stdc++.h>
// #define int long long

// using namespace std;

// int32_t main()
// {

//     int tests;
//     int n;

//     cin >> tests;
//     cin >> n;
//     int nums[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     int smallest = nums[0];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int sum = nums[i] + nums[j] + j - i;
//             if (sum < smallest)
//             {
//                 smallest = sum;
//             }
//         }
//     }
//     cout << smallest << " ";
//     return 0;
// }

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

        int smallest = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = nums[i] + nums[j] + j - i;
                if (sum < smallest)
                {
                    smallest = sum;
                }
            }
        }

        cout << smallest << endl;
    }

    return 0;
}
