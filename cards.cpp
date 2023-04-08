#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x == 0 || n == x)
        {
            cout << "0" << endl;
        }
        else if (x <= n / 2)
        {
            cout << x << endl;
        }
        else
        {
            cout << abs(x - n) << endl;
        }
    }
    return 0;
}