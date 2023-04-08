#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (abs(x - y)) << endl;
    }
    /* int t;
     cin >> t;
     while (t--)
     {
         int x, y;
         cin >> x >> y;
         if (x > y)
         {
             cout << (x - y) << endl;
         }
         else if (x < y)
         {
             cout << (y - x) << endl;
         }
     }*/
    return 0;
}