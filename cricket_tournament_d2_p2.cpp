#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // cout << n << " " << m << endl;
        int match_count = 0;
        while (n > 1)
        {
            int reminder_team = n % 2;
            int match = n / 2;
            match_count += match;
            n = reminder_team + match;
        }
        cout << (match_count >= m ? "YES" : "NO") << endl;
    }

    return 0;
}