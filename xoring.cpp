#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
            if (b[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        int tmp = min(count0, count1);
        string sol = "";
        for (int i = 0; i < tmp; i++)
        {
            sol += "1";
        }
        for (int i = tmp; i < a.length(); i++)
        {
            sol += "0";
        }
        cout << sol << endl;
    }
    return 0;
}