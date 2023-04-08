#include <bits/stdc++.h>
using namespace std;
int triplet(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
        return -1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int tenp = triplet(a);
        if (tenp == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << tenp << " " << (a / tenp) << " " << 1 << endl;
        }
    }
    return 0;
}