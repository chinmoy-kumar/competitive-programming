/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Towers of Boxes
URL: https://codeforces.com/contest/2203/problem/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, d, m;   
        cin >> n >> m >> d;
        int maxBoxPerTower = d / m + 1;
        int res = (n + maxBoxPerTower - 1) / maxBoxPerTower; // ceil of (n/maxBoxPerTower)
        cout << res << nl;
    }

    return 0;
}