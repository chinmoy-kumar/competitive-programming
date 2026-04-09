/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. The Equalizer
URL: https://codeforces.com/contest/2217/problem/A
=====================================================*/

/* 
    Observation:
    * Don't have to always use the special use special move if it is not needed.
    * Use only if Shaunak is loosing the game.
 */

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
        ll sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if(sum % 2 != 0)
        {
            cout << "YES" << nl;
        }
        else{
            sum = k * n;
            if(sum % 2 == 0) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
        
    }

    return 0;
}