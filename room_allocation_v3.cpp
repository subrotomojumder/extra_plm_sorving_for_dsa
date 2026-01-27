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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        };
        int room_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int room = ceil((double)a[i] / 2);
            room_sum += room;
        }
        cout << room_sum << endl;
    }

    return 0;
}