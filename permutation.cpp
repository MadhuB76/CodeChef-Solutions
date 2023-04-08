#include <iostream>
using namespace std;
void ans()
{
    int n;
    cin >> n;
    if (n < 4)
    {
        cout << "-1" << endl;
        return;
    }
    if (n == 4)
    {
        cout << "2"
             << " "
             << "4"
             << " "
             << "1"
             << " "
             << "3" << endl;
        return;
    }
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
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