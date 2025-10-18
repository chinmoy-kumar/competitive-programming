/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Parity and Sum
URL: https://codeforces.com/problemset/problem/1993/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> odd;
    vector<ll> even;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] % 2 == 0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll oddSz = odd.size();
    ll evenSz = even.size();

    if(oddSz == 0 || evenSz == 0)
    {
        cout << 0 << nl;
        return;
    }
    
    ll mx = odd.back();
    int ans = 0;

    for (int i = 0; i < evenSz; i++)
    {
        if(even[i] > mx)
        {
            cout << evenSz + 1 << nl;
            return;
        }
        else{
            ans++;
            mx += even[i];
        }
    }
    cout << ans << nl;  
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}