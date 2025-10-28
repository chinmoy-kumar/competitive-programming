/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Isamatdin and His Magic Wand!
URL: https://codeforces.com/contest/2167/problem/C
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
        int n;
        cin>> n;
        vector<ll> v(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] % 2 != 0) odd++;
            else even++;
        }

        if(odd != n && even != n)
            sort(v.begin(), v.end());


        for(auto x : v)
            cout << x << " ";

        cout << nl;
        
    }

    return 0;
}