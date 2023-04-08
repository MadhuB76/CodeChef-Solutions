#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n] = {0};
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i] - 1]++;
        }
        sort(b, b + n);

        cout << n - b[n - 1] << endl;
    }
    return 0;
}