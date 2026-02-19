#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int power = 4 - x;
    int rank_value = pow(2, power);
    int prizes = rank_value * 1000;
    cout << prizes;
    return 0;
}