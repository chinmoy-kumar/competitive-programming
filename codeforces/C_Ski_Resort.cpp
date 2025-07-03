/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Ski Resort
URL: https://codeforces.com/contest/1840/problem/C
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
        int n, k, q;
        cin >> n >> k >> q;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll res = 0;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                cnt++;
            else
                cnt = 0;

            if (cnt >= k)
            {
                res += cnt - k + 1;
            }
        }
        cout << res << nl;
    }

    return 0;
}