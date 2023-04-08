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
        vector<long long int> array;
        for (int i = 0; i < 2 * n; i++)
        {
            int m;
            cin >> m;
            array.push_back(m);
        }
        sort(array.begin(), array.end());
        long long int c = 1e9;
        for (int i = 0; i <= n; i++)
        {
            c = min(c, array[n + i - 1] - array[i]);
        }
        cout << c << endl;
    }
    return 0;
}