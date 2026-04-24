/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Antimedian Deletion
URL: https://codeforces.com/contest/2211/problem/A
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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if(n == 1) cout << 1 << nl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << 2 << " ";
            }
            cout << nl;
        }
    }

    return 0;
}