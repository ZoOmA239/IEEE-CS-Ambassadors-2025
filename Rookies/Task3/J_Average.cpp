#include <bits/stdc++.h>
using namespace std;

double avg(int num, double arr[])
{
    double sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum / num;
}

int32_t main()
{
    int num;
    cin >> num;
    double arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(7) << avg(num, arr) << endl;
    return 0;
}
