/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef 
Problem: Monster Monster
URL: https://www.codechef.com/problems/KO_MON
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
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            res = max(res, v[i] + i * x);
        }
        cout << res << nl;
        
    }

    return 0;
}