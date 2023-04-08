#include <iostream>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int b[n];
            for (int j = 0; j <= n; j++)
            {
                cin >> b[j];
                b[a[i - 1]]++;
            }
        }
    }
    return 0;
}