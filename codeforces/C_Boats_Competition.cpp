/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: C. Boats Competition
URL: https://codeforces.com/contest/1399/problem/C
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

        sort(v.begin(), v.end());

        int ans = 0;
        for (int weightSum = 1; weightSum <= 100; weightSum++)
        {
            int l = 0, r = n - 1;
            int cnt = 0;
            while (l < r)
            {
                if (v[l] + v[r] > weightSum)
                    r--;
                else if (v[l] + v[r] < weightSum)
                    l++;
                else
                {
                    cnt++;
                    l++, r--;
                }
            }

            ans = max(ans, cnt);
        }
        cout << ans << nl;
    }

    return 0;
}