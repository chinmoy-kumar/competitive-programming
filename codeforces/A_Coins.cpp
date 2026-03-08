/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Coins
URL: https://codeforces.com/problemset/problem/1814/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t ;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        if(n % 2 == 0 || (n - k) % 2 == 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}