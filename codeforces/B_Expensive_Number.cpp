/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Expensive Number
URL: https://codeforces.com/problemset/problem/2093/B
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
        string s;
        cin >> s;
        int n = s.length();
        int ans = n - 1;
        int lastPosDigit;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                lastPosDigit = i;
                break;
            }
        }
        for (int i = 0; i < lastPosDigit; i++)
        {
            if (s[i] == '0')
                ans--;
        }
        cout << ans << nl;
    }

    return 0;
}