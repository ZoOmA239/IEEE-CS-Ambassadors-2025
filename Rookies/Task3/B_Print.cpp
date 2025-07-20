#include <bits/stdc++.h>
#include <string>
#define int long long

using namespace std;
void print(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i;
        if (i != num)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int32_t main()
{
    int num;
    cin >> num;
    print(num);
    return 0;
}