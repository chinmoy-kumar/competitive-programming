/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Convergence
URL: https://codeforces.com/contest/2232/problem/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int mid = v[n-1]/2;

        int l = 0, r = n-1, cnt = 0;
        while(l < r)
        {
            if(v[l] != v[r])
            {
                cnt++;
            }
            l++; r--;
        }
        cout << cnt << nl;
    }
    

    return 0;
}