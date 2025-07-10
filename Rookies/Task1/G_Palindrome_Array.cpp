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

    bool isPalindrome = true;
    for (int j = 0; j < n / 2; j++)
    {
        if (nums[j] != nums[n - 1 - j])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}