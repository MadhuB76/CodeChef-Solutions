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
        int count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 10 && a[i] <= 60)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}