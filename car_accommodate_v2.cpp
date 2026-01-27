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
        int reminder = n % 4;
        if (reminder != 0)
        {
            int also_need = 4 - reminder;
            cout << ((n + also_need) / 4);
        }
        else
        {
            cout << (n / 4);
        }
        cout << endl;
    }

    return 0;
}