#include <bits/stdc++.h>
#include <string>
#define int long long

using namespace std;
int power(int num1, int num2)
{
    int res = 1;
    for (int i = 0; i < num2; i++)
        res *= num1;
    return res;
}

int Equation(int num1, int num2)
{
    int result = 0;
    for (int i = 0; i <= num2; i += 2)
    {
        if (i == 0)
            result += power(num1, 0) - 1;
        else
            result += power(num1, i);
    }
    return result;
}

int32_t main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << Equation(num1, num2);
    return 0;
}