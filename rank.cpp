#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int count = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x <= i * 25)
            {
                cout << abs(i) << endl;
                break;
            }
        }
    }
    return 0;
}