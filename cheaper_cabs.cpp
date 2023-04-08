#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "First" << endl;
        }
        else if (b < a)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}