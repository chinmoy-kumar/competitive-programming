/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Good times Good times
URL: https://codeforces.com/contest/2241/problem/B
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
    while (t--)
    {
        int x; cin >> x;
        string s = to_string(x);
        int len = s.length();
        
        ll res = pow(10,len)+1;
        cout << res << nl;

    }
    

    return 0;
}