#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
