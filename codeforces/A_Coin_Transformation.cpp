/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Coin Transformation
URL: https://codeforces.com/problemset/problem/2043/A
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
        ll n;
        cin >> n;

        ll ans = 1;
        while (n > 3)
        {
            n = n / 4;
            ans *= 2;
        }
        cout << ans << nl;
    }

    return 0;
}