#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        long long arr[2 * m];
        for (long long i = 0; i < 2 * m; i++)
        {
            cin >> arr[i];
        }
        vector<long long> u;
        for (long long i = 0; i < m; i++)
        {
            if (arr[i] > m)
            {
                u.push_back(i);
            }
        }
        vector<long long> w;
        for (long long i = m; i < 2 * m; i++)
        {
            if (arr[i] <= m)
            {
                w.push_back(i);
            }
        }
        long long sol = 0;
        for (long long i = 0; i < u.size(); i++)
        {
            sol += (w[i] - u[i]);
        }
        cout << sol << endl;
    }
    return 0;
}