/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: E. Segments with Small Set
URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    map<int, int> mp;
    while (r <= n)
    {
        if (mp.size() <= k)
        {
            ans+= r-l;
            if(r < n)
                mp[v[r]]++;
            r++;
        }
        else
        {
            mp[v[l]]--;
            if(mp[v[l]] == 0)   
                mp.erase(v[l]);
            l++;
        }
    }
    cout << ans << nl;

    return 0;
}