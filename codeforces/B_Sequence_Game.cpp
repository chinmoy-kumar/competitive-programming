/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Sequence Game
URL: https://codeforces.com/contest/1862/problem/B
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
        ll n; cin >> n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> res;
        res.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if(v[i] < v[i-1])
            {
                // ll v2 = v[i] - 1;
                // res.push_back(v2);
                res.push_back(v[i]);
                res.push_back(v[i]);
            }
            else{
                res.push_back(v[i]);
            }
        }
        int m = res.size();
        cout << m << nl;
        for(int i = 0; i < m; i++)
        {
            cout << res[i] << " ";
        }
        cout << nl;
        
    }

    return 0;
}