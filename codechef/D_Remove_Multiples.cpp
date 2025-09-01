/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Remove Multiples
URL: https://www.codechef.com/problems/REMOVEMUL?tab=statement
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
        ll n, m;
        cin >> n >> m;
        vector<ll> v(m);
        ll mainTotal = (n * (n+1))/2;
        ll secondTotal = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            secondTotal += v[i];
        }

        cout << mainTotal - secondTotal << nl;
        
    }

    return 0;
}