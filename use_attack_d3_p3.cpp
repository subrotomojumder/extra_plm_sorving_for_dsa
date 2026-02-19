#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        int attack = 0;
        while (h > 0)
        {
            if (attack == 0)
            {
                h -= y;
                attack++;
            }
            else
            {
                h -= x;
                attack++;
            }
        }
        cout << attack << endl;
    }
    return 0;
}