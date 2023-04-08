#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (x == y)
        {
            cout << "0" << endl;
        }
        else if (abs((x - y) % k) == 0)
        {
            cout << abs((x - y) / k) << endl;
        }
        else if (abs((x - y) % k) != 0)
        {
            cout << (abs((x - y) / k)) + 1 << endl;
        }
    }
    return 0;
}