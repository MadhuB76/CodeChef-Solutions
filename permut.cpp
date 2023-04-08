#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array, array + n);
        int sample = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] != i + 1 && array[i] < i + 1)
            {
                sample = sample + (i + 1 - array[i]);
            }
            else if (array[i] > i + 1)
            {
                sample = -1;
                break;
            }
        }
        cout << sample << endl;
    }
}