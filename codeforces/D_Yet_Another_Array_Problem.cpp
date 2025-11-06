/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Yet Another Array Problem
URL: https://codeforces.com/contest/2167/problem/D?
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool flag = 0;
        for (ll i = 2; i <= 100; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if(__gcd(i, v[j]) == 1)
                {
                    cout << i << nl;
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        
    }

    return 0;
}