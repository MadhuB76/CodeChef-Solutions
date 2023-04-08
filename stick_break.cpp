#include <iostream>
using namespace std;
void ans()
{
    int l, k;
    cin >> l >> k;
    if (l % k == 0)
    {
        cout << "0" << endl;
        return;
    }

    else
    {
        cout << "1" << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
    return 0;
}