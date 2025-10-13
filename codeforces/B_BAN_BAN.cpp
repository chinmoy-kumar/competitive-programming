/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. BAN BAN
URL: https://codeforces.com/problemset/problem/1747/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (n + 2 - 1) / 2 << nl;

        int l = 1, r = 3 * n;
        while (l < r)
        {
            cout << l << " " << r << nl;
            l += 3;
            r -= 3;
        }
    }

    return 0;
}