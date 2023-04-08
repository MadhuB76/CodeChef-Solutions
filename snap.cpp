#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n], a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sol = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
            {
                count++;
            }
            else
            {
                sol = max(sol, count);
                count = 0;
            }
        }
        sol = max(sol, count);
        cout << sol << endl;
    }
    return 0;
}