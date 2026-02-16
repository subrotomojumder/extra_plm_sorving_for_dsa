#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int coins = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] * x) < y)
            {
                coins += a[i] * x;
            }
            else
            {
                coins += y;
            }
        }
        cout << coins << endl;
    }

    return 0;
}