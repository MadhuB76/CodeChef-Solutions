#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(a[i], maxi);
    }
    cout << maxi << endl;
    return 0;
}