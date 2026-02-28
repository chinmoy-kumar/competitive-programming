/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Buttons
URL: https://codeforces.com/problemset/problem/1858/A
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
        ll a, b, c;
        cin >> a >> b >> c;
        if(a > b) cout << "First" << nl;
        else if(a < b) cout << "Second" << nl;
        else
        {
            if(c%2 == 0) cout << "Second" << nl;
            else cout << "First" << nl;
        }
    }

    return 0;
}