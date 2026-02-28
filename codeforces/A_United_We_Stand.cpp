/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. United We Stand
URL: https://codeforces.com/problemset/problem/1859/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll mx = *max_element(v.begin(), v.end());

        vector<ll> b;
        vector<ll> c;
        for (int i = 0; i < n; i++)
        {
            if(v[i] != mx)
            {
                b.push_back(v[i]);
            }
            else{
                c.push_back(v[i]);
            }
            
        }

        if(b.size() == 0)
        {
            cout << -1 << nl;
        }
        else{
            cout << b.size() << " " << c.size() << nl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << nl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << nl;
            
        }
        


    }

    return 0;
}