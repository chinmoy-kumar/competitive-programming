/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Make it Beautiful
URL: https://codeforces.com/problemset/problem/1783/A
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
        vector<int> v(n);
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] != v[0]) flag = 0;
        }

        if(flag == 1) cout << "NO" << nl;
        else
        {
            sort(v.rbegin(), v.rend());
            cout << "YES" << nl;
            if(v[0] == v[1]) swap(v[0], v[n-1]);
            
            for(int x : v) cout << x << " ";
            cout << nl;
        }
        
        
    }

    return 0;
}