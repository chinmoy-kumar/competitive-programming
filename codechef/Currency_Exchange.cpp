/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Currency Exchange
URL: https://www.codechef.com/problems/CUREX
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int st = a1 * 5 + b1;
        int tr = a2 * 5 + b2;

        if (st >= tr && (st - tr) % 6 == 0)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }

    return 0;
}