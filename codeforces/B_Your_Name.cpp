/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Your Name
URL: https://codeforces.com/contest/2167/problem/B
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
        int n;cin>> n;

        string s, t;
        cin >> s >> t;

        vector<int> v(256, 0);
        vector<int> v2(256, 0);
        for (int i = 0; i < n; i++)
        {
            int x = s[i];
            v[x]++;
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int x = t[i];
            v2[x]++;
        }

        for (int i = 0; i < n; i++)
        {
            int x = t[i];
            if(v2[x] != v[x])
            {
                flag = 1;
                break;
            }

        }
        
        
        if(flag == 1) cout << "NO" << nl;
        else cout << "YES" << nl;
        

    }

    return 0;
}