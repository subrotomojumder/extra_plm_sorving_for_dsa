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
            int opt1 = a[i] * x;
            int opt2 = y;
            coins += min(opt1, opt2);
            // if ((a[i] * x) < y)
            // {
            //     coins += a[i] * x;
            // }
            // else
            // {
            //     coins += y;
            // }
        }
        cout << coins << endl;
    }

    return 0;
}