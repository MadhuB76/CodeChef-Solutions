#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dis_a = 100 - a;
        int dis_b = 200 - (2 * b);
        if (dis_a < dis_b)
        {
            cout << "FIRST" << endl;
        }
        else if (dis_a == dis_b)
        {
            cout << "BOTH" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }
    return 0;
}