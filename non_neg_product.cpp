#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 0)
            {
                count = 0;
                break;
            }
            else if (arr[j] < 0)
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}