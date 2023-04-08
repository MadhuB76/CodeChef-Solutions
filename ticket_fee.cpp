#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, p, q;
        cin >> x >> p >> q;
        int fee = x * abs(p - q);
        cout << fee << endl;
    }
    return 0;
}