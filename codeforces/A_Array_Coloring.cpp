/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Array Coloring
URL: https://codeforces.com/problemset/problem/1857/A
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
        int oddCnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x % 2 != 0)
                oddCnt++;
        }
        if(oddCnt % 2 != 0) cout << "NO" << nl;\
        else cout << "YES" << nl;
    }

    return 0;
}