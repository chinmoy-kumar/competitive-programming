/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Need More Arrays
URL: https://codeforces.com/problemset/problem/2114/C
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0, pre = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (pre + 1 < v[i])
            {
                cnt++;
                pre = v[i];
            }
        }
        cout << cnt << nl;
    }

    return 0;
}