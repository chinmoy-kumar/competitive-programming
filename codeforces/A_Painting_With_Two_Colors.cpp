/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: A. Painting With Two Colors
URL: https://codeforces.com/contest/2134/problem/A
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
        ll n; cin >> n;
        int a, b; cin >> a >> b;

        if((n-b) % 2 != 0)
            cout << "NO" << nl;
        else if(a <= b)
            cout << "YES" << nl;
        else
        {
            if((n-a) % 2 == 0)
                cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }

    return 0;
}