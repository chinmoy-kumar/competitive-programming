/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Turtle and Good Strings
URL: https://codeforces.com/contest/2003/problem/A
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
        string s;
        cin >> s;
        if (n >= 2)
        {
            if (s[0] == s[n - 1])
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}