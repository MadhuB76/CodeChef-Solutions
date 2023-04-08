#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x;
        cin >> x;
        if (x % 5 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            a = x / 10;
            b = x % 10;
            c = b / 5;
            cout << a + c << endl;
        }
    }
    return 0;
}