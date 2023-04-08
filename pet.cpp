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
        int arr[n];
        map<int, int> mad;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mad[arr[i]]++;
        }
        int count = 1;
        for (auto var : mad)
        {
            if (var.second % 2 != 0)
            {
                cout << "NO" << endl;
                count = 0;
                break;
            }
        }
        if (count)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}