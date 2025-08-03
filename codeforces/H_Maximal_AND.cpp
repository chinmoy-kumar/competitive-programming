/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: H. Maximal AND
URL: https://codeforces.com/problemset/problem/1669/H
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

const int B = 30;

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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(B + 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = B; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = B; i >= 0; i--)
        {
            if (bits[i] == n)
            {
                ans += (1LL << i);
            }
            else
            {
                int need = n - bits[i];
                if (k >= need)
                {
                    ans += (1LL << i);
                    k -= need;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}