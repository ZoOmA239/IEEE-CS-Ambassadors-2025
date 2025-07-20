#include <bits/stdc++.h>
using namespace std;

void Max_and_Min(int num, int arr[])
{
    int max = arr[num];
    int min = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max << endl;
}

int32_t main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    Max_and_Min(num, arr);
    return 0;
}
