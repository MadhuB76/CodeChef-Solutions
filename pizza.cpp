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
        int slc = n * x;
        if (slc % 4 == 0)
        {
            cout << slc / 4 << endl;
        }
        else
        {
            cout << (slc / 4) + 1 << endl;
        }
    }
    return 0;
}