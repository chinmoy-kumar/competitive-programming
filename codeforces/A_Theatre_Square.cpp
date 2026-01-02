/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Theatre Square
URL: https://codeforces.com/problemset/problem/1/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, a;
    cin >> n >> m >> a;

    ll nn = (n+a-1)/a;
    ll mm = (m+a-1)/a;
    ll res = nn * mm;
    cout << res << nl;

    return 0;
}