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
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int a_scores = 0, b_scores = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && s[i] == 'A' || s[i] == s[i - 1])
            {
                s[i] == 'A' ? a_scores++ : b_scores++;
            }
        }
        cout << a_scores << " " << b_scores << endl;
    }
    return 0;
}