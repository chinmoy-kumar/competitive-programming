/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Game with Integers
URL: https://codeforces.com/problemset/problem/1899/A
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
        int n;
        cin >> n;
        if((n+1)%3 == 0 || (n-1)%3 == 0) cout << "First" << nl;
        else cout << "Second" << nl;
    }

    return 0;
}