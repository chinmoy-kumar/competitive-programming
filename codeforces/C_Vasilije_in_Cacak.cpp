/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Vasilije in Cacak
URL: https://codeforces.com/contest/1878/problem/C
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
        ll n, k;
        ll x;
        cin >> n >> k >> x;
        
        ll smSum = 0, lgSum = 0;
        smSum = k*(k+1)/2;
        lgSum = k*(2*n-k+1)/2;
        
        if(smSum <= x && lgSum >= x) cout << "YES" << nl;
        else cout << "NO" << nl;

    }

    return 0;
}