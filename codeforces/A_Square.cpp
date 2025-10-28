/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Square?
URL: https://codeforces.com/contest/2167/problem/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >>d;

        if(a==b && b == c && c == d) cout << "YES" << nl;
        else  cout << "NO" << nl;
    }

    return 0;
}