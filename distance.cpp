#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, y;
        cin >> x >> y >> a >> b;
        int sum1 = ((x * x) + (y * y));
        int sum2 = ((a * a) + (b * b));
        if (sum1 > sum2)
        {
            cout << "ALEX" << endl;
        }
        else if (sum2 > sum1)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}