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
        // cout << n << " " << x << " " << y << endl;
        int money = x;
        int after_first_s = n - 1;
        int second_is_posible = (after_first_s % 2) == 0;
        if (second_is_posible)
        {
            money += (after_first_s / 2) * y;
        }
        else
        {
            money += after_first_s * x;
        }

        cout << money << endl;
    }
    return 0;
}