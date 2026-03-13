/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Two Permutations
URL: https://codeforces.com/problemset/problem/1761/A
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
        int n, a, b; cin >> n >> a >> b;
        ll abSum = a+b;
        if((n >= abSum+2) || (n == a && n == b)) cout << "Yes" << nl;
        else cout << "No" << nl;
        
    }

    return 0;
}