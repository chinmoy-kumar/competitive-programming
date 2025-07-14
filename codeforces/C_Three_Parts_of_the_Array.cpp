/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: C. Three Parts of the Array
URL: https://codeforces.com/contest/1006/problem/C
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = n-1;
    ll sum1 = 0, sum2 = 0, ans = 0;

    while(l <= r)
    {
        if(sum1 < sum2)
        {
            sum1 += v[l];
            l++;
        }
        else
        {
            sum2 += v[r];
            r--;
        }
        
        if(sum1 == sum2)     
            ans = sum1;
    }
    cout << ans << nl;

    return 0;
}