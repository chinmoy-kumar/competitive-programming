/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: E. Binary Deque
URL: https://codeforces.com/problemset/problem/1692/E
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

        int oneCnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                oneCnt++;
        }

        int l = 0, r = 0, mx = 0;
        ll sum = 0;
        if (oneCnt < k)
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            while (r < n)
            {
                sum += v[r];
                if (sum <= k)
                {
                    mx = max(mx, r - l + 1);
                }
                else
                {
                    sum -= v[l];
                    l++;
                    if (sum <= k)
                    {
                        mx = max(mx, r - l + 1);
                    }
                }
                r++;
            }
        }

        cout << n - mx << nl;
    }

    return 0;
}