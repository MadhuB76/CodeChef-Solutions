#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            if (x % 2 != 0)
            {
                cout << "CHEF" << endl;
                continue;
            }
            else
            {
                cout << "CHEFINA" << endl;
                continue;
            }
        }
        int sub = abs(x - y);
        if (sub >= 2 && x > y)
        {
            cout << "CHEF" << endl;
            continue;
        }
        else if (sub >= 2 && x < y)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
        if (x % 2 != 0 && x > y)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
        else if (x % 2 == 0 && x > y)
        {
            cout << "CHEF" << endl;
            continue;
        }
        else if (y % 2 == 0 && y > x)
        {
            cout << "CHEF" << endl;
        }
        else if (y % 2 != 0 && y > x)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
    }
    return 0;
}