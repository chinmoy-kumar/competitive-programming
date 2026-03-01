/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Ambitious Kid
URL: https://codeforces.com/problemset/problem/1866/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Approch - 01
    /*
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                v[i] = v[i] * -1;
        }

        sort(v.begin(), v.end());
        int res = abs(0 - v[0]);
        cout << res << nl;
    */
    
    // Approch - 02
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
         res = min(res, abs(v[i]));
    }
    cout << res << nl;
    
    return 0;
}

