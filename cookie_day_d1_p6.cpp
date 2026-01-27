#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool is_possible = false;
        long long min_wasted = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                is_possible = true;
                min_wasted = min(min_wasted, (long long)(a[i] % k));
            }
        }
        cout << (is_possible ? min_wasted : -1) << endl;
    }

    return 0;
}