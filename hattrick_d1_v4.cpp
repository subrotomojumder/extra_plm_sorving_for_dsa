#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int wicket = 0;
        for (int i = 0; i < 6; i++)
        {
            char c;
            cin >> c;
            if (c == 'W')
            {
                wicket++;
            }
            else if (wicket < 3)
            {
                wicket = 0;
            }
        }
        cout << (wicket > 2 ? "YES" : "NO") << endl;
    }

    return 0;
}