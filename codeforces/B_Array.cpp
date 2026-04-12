/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Array
URL: https://codeforces.com/contest/2209/problem/B
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
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            int cnt1 = 0, cnt2 = 0;
            for (int j = i+1; j < n; j++)
            {
                if(v[i] < v[j]) cnt1++;
                if(v[i] > v[j]) cnt2++;
            }
            int res = max(cnt1, cnt2);
            cout << res << " ";
        }
        cout << nl; 
        
    }

    return 0;
}