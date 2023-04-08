#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y > x)
        {
            cout << "PROFIT" << endl;
        }
        else if (x == y)
        {
            cout << "NEUTRAL" << endl;
        }
        else
        {
            cout << "LOSS" << endl;
        }
    }
    return 0;
}