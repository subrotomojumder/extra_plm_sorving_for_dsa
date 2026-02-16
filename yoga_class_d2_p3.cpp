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
        double amount = 0;
        if (x < ((double)y / 2))
        {
            amount = (n / 2) * y;
            if (n % 2 != 0)
            {
                amount+= x;
            }
        }
        else
        {
            amount = n * x;
        }

        // int money = x;
        // int after_first_s = n - 1;
        // int second_is_posible = (after_first_s % 2) == 0;
        // if (second_is_posible)
        // {
        //     money += (after_first_s / 2) * y;
        // }
        // else
        // {
        //     money += after_first_s * x;
        // }

        cout << amount << endl;
    }
    return 0;
}