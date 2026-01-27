#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int change_count = 0;
        bool is_close = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d && is_close)
            {
                is_close = false;
                change_count++;
            }
            else if (a[i] <= d && !is_close)
            {
                is_close = true;
                change_count++;
            }
        }
        cout << change_count << endl;
    }

    return 0;
}