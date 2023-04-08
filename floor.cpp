#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a / x == b / y)
        {
            cout << "Both" << endl;
        }
        else if (a / x > b / y)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Chef" << endl;
        }
    }
    return 0;
}