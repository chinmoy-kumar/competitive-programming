/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: 7 Rings
URL: https://www.codechef.com/problems/SEVENRINGS
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
        int n, x;
        cin >> n >> x;
        ll total = n * x;
        string s = to_string(total);
        int sz = s.length();
        if(sz == 5 && s[0] != 0)
            cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}