/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Goals of Victory
URL: https://codeforces.com/problemset/problem/1877/A
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
        ll sum = 0;
        int x;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            sum += x;
        }

        cout << sum * -1 << nl;
    }

    return 0;
}
