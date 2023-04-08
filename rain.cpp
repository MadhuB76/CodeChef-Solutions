#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rain;
        cin >> rain;
        if (rain < 3)
        {
            cout << "LIGHT" << endl;
        }
        else if (rain >= 3 && rain < 7)
        {
            cout << "MODERATE" << endl;
        }
        else if (rain >= 7)
        {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}