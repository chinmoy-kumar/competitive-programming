/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Doremy's Paint 3
URL: https://codeforces.com/problemset/problem/1890/A
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
            cin >> v[i];

        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        if (mp.size() > 2)
        {
            cout << "No" << nl;
            continue;
        }

        ll freq_1 = mp.begin()->second;
        ll freq_2 = mp.rbegin()->second;

        int diff = abs(freq_1 - freq_2);
        if(diff <= 1)
            cout << "Yes" << nl;
        else cout << "No" << nl;
    }

    return 0;
}