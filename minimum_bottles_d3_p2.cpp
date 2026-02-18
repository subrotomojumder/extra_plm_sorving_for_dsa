#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int total_water = 0;
        for (int i = 0; i < n; i++)
            total_water += a[i];
        cout << ceil((double)total_water / x) << endl;
    }
    return 0;
}