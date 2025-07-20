#include <bits/stdc++.h>
using namespace std;

void ShiftZeros(int num, int arr[])
{

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
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
    ShiftZeros(num, arr);
    return 0;
}
