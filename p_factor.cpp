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
        int p_factor;
        if (x % 2 == 0)
        {
            p_factor = 2;
        }
        else if (x % 3 == 0)
        {
            p_factor = 3;
        }
        else
        {
            p_factor = x;
        }
        x = x + p_factor;
        int sub = y - x;
        int sol = sub / 2;
        if (sub % 2 != 0)
        {
            sol += 1;
        }
        cout << sol + 1 << endl;
    }
    return 0;
}