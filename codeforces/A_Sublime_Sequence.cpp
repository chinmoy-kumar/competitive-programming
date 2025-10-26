/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Sublime Sequence
URL: https://codeforces.com/contest/2148/problem/A
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
        int x, n;
        cin >> x >> n;
        if(n % 2 == 0) cout << 0 << nl;
        else cout << x << nl;
    }

    return 0;
}