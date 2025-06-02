/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. 1D Eraser
URL: https://codeforces.com/contest/1873/problem/D
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, ans = 0;
        while (l < s.size())
        {
            if (s[l] == 'B')
            {
                ans++;
                l += k;
            }
            else
                l++;
        }
        cout << ans << nl;
    }

    return 0;
}