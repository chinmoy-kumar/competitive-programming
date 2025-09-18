/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Preparing for the Contest
URL: https://codeforces.com/contest/1914/problem/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

void solve(int t)
{
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a = n - k;
        for (int i = a; i > 0; i--)
        {
            cout << i << " ";
        }
        for (int i = a + 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    solve(t);

    return 0;
}