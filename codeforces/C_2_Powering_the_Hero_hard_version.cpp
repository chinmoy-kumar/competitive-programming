/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C2. Powering the Hero (hard version)
URL: https://codeforces.com/contest/1800/problem/C2
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
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        ll ans = 0;
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.empty())
                    continue;
                else
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << ans << nl;
    }

    return 0;
}