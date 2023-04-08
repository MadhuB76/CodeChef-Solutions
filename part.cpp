#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, i;
        cin >> n >> x;
        int a[n];
        int b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                cout << count = count + b[i] << endl;
            }
        }
    }
    return 0;
}