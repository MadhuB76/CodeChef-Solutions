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
        int count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                count += b[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}