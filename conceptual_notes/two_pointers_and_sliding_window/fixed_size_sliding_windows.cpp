/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Black and White Stripe
URL: https://codeforces.com/contest/1690/problem/D
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

        int l = 0, r = 0, ans = INT_MAX, white = 0;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                white++;
            }
            
            // 'r-l+1' refers to window size
            if (r - l + 1 == k) // condition for fixed sliding window
            {
                ans = min(ans, white);
                if (s[l] == 'W')
                {
                    white--; // contribution removed
                }
                l++;
            }
            r++;
        }
        cout << ans << nl;
    }

    return 0;
}