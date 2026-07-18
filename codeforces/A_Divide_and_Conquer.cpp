/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Divide and Conquer
URL: https://codeforces.com/contest/2241/problem/A
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
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if(x%y == 0)
        {
            cout << "YES" << nl;
        }
        else cout << "NO" << nl;
    }
    

    return 0;
}