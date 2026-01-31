/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Jagged Swaps
URL: https://codeforces.com/problemset/problem/1896/A
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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v[0] == 1) cout << "YES" << nl;
        else cout << "NO" << nl;

    }

    return 0;
}