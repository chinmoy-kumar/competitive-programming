/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: F. Money Trees
URL: https://codeforces.com/problemset/problem/1873/F
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
        ll k;
        cin >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0, r = 0;
        ll mx = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum <= k && r + 1 < n && (h[r] % h[r + 1] == 0))
            {
                ll winLength = r - l + 1;
                mx = max(mx, winLength);
                r++;
            }
            else
            {
                if ((r + 1 < n) && (h[r] % h[r + 1] != 0))
                {
                    if (sum <= k) // why this is important when the r has violated the condition?
                    {
                        ll winLength = r - l + 1;
                        mx = max(mx, winLength);
                    }
                    l = r + 1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if (sum <= k)
                    {
                        ll winLength = r - l + 1;
                        mx = max(mx, winLength);
                    }
                    sum -= a[l];
                    l++;
                    r++;
                }

            }
        }
        cout << mx << nl;
    }

    return 0;
}