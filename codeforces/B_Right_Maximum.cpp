/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Right Maximum
URL: https://codeforces.com/contest/2204/problem/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int op = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] >= mx) op++;
            mx = max(v[i], mx);
        }
        
        cout << op << nl;
    }
    

    return 0;
}