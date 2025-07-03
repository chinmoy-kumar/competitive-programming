/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Robin Helps
URL: https://codeforces.com/problemset/problem/2014/A
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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int cnt = 0;
        int goldReserve = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                goldReserve += a[i];
            }
            else if (a[i] == 0 && goldReserve != 0)
            {
                goldReserve--;
                cnt++;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}