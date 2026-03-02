/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Grasshopper on a Line
URL: https://codeforces.com/problemset/problem/1837/A
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
        int x, k;
        cin >> x >> k;

        if(x % k == 0)
        {
            cout << 2 << nl;
            cout << x-1 << " " << 1 << nl;
        }
        else{
            cout << 1 << nl;
            cout << x << nl;
        }
    }

    return 0;
}