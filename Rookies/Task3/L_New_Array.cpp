#include <bits/stdc++.h>
using namespace std;

void New_arr(int num, int arr1[], int arr2[])
{

    int NewArr[num + num];

    for (int i = 0; i < num; i++)
    {
        NewArr[i] = arr2[i];
    }
    for (int i = 0; i < num; i++)
    {
        NewArr[i + num] = arr1[i];
    }
    for (int i = 0; i < num + num; i++)
    {
        cout << NewArr[i] << " ";
    }
}

int32_t main()
{
    int num;
    cin >> num;
    int arr1[num];
    int arr2[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < num; i++)
    {
        cin >> arr2[i];
    }
    New_arr(num, arr1, arr2);
    cout << endl;
    return 0;
}
