#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' || s[i] == '5')
            {
                flag = 1;
            }
            else
            {
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
