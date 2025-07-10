#include <iostream>

using namespace std;

int main()
{
    // A
    int n;
    long long sum = 0;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int j = 0; j < n; j++)
    {
        sum = sum + nums[j];
    }
    cout << abs(sum) << "\n";

    return 0;
}
