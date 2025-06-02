/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Long Long
URL: https://codeforces.com/contest/1843/problem/B
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        bool flag = false;
        ll sum = 0, cnt = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(v[i]);
            if (flag)
            {
                if (i == n || v[i] > 0)
                {
                    cnt++;
                    flag = false;
                }
            }
            else
            {
                if (v[i] < 0)
                {
                    flag = true;
                }
            }
        }
        cout << sum << " " << cnt << nl;
    }

    return 0;
}