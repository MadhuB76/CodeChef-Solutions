#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 103;
    int x = n % 10;
    int y = n / 10;
    int a = y % 10;
    int b = y / 10;
    int q = x + a + b;
    int w = x * a * b;
    cout << q << endl;
    cout << w << endl;
    return 0;
}