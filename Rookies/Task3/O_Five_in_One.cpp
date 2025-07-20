#include <bits/stdc++.h>
using namespace std;

void Five_in_one(int num, int arr[])
{
    int v1, v2, v3, v4, v5;
    v1 = *max_element(arr, arr + num);
    v2 = *min_element(arr, arr + num);
    cout << "The maximum number : " << v1 << endl;
    cout << "The minimum number : " << v2 << endl;

    int count = 0;
    for (int i = 0; i < num; i++)
    {
        bool isprime = true;
        if (arr[i] < 2)
        {
            isprime = false;
            continue;
        }
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == true)
        {
            count++;
        }
    }
    v3 = count;
    cout << "The number of prime numbers : " << v3 << endl;

    int palindrome_count = 0;
    for (int i = 0; i < num; i++)
    {
        bool is_palindrome = true;
        string str = to_string(arr[i]);
        int length = str.size();
        for (int j = 0; j < length / 2; j++)
        {
            if (str[j] != str[length - j - 1])
            {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome == true)
        {
            palindrome_count++;
        }
    }
    v4 = palindrome_count;
    cout << "The number of palindrome numbers : " << v4 << endl;

    v5 = arr[0];
    int maxDivisors = -1;
    for (int i = 0; i < num; i++)
    {
        int number = arr[i];
        int numberOfDivisors = 0;
        for (int j = 2; j < number; j++)
        {
            if (number % j == 0)
            {
                numberOfDivisors++;
            }
        }
        if ((numberOfDivisors == maxDivisors) && number > v5)
        {
            v5 = number;
        }
        if (numberOfDivisors > maxDivisors)
        {
            maxDivisors = numberOfDivisors;
            v5 = number;
        }
    }

    cout << "The number that has the maximum number of divisors : " << v5 << endl;
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
    Five_in_one(num, arr);

    cout << endl;
    return 0;
}
