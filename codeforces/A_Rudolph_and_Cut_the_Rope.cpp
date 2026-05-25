/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Rudolph and Cut the Rope
URL: https://codeforces.com/contest/1846/problem/A
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
        int n; cin >> n;
        int cnt = 0;
        while(n--)
        {
            int a, b; cin >> a >> b;
            if(a > b) cnt++;
        }
        cout << cnt << nl;
    }

    return 0;
}