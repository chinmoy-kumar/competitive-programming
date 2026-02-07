/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. How Much Does Daytona Cost?
URL: https://codeforces.com/problemset/problem/1878/A
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if(find(v.begin(), v.end(), k) == v.end())
        {
            cout << "NO" << nl;
        }
        else cout << "YES" << nl;
        
    }

    return 0;
}