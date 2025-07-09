/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: A. Simple Palindrome
URL: https://codeforces.com/problemset/problem/2005/A
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

        string v = "aeiou";

        ll seq, rem;
        string ans;
        seq = n / 5;
        rem = n % 5;

        while(seq--)
        {
            ans += v;
        }
        for (ll i = 0; i < rem; i++)
        {
            ans += v[i];
        }
        sort(ans.begin(), ans.end());
        cout << ans << nl;
        
    }

    return 0;
}