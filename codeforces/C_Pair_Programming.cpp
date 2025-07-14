/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: C. Pair Programming
URL: https://codeforces.com/contest/1547/problem/C
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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int i = 0, j = 0;
        vector<int> ans;
        bool flag = true;
        while (i < n || j < m)
        {
            if (i < n && a[i] <= k && a[i] != 0)
            {
                ans.push_back(a[i]);
                i++;
            }
            else if (j < m && b[j] <= k && b[j] != 0)
            {
                ans.push_back(b[j]);
                j++;
            }
            else if (i < n && a[i] == 0)
            {
                ans.push_back(a[i]);
                i++, k++;
            }
            else if (j < m && b[j] == 0)
            {
                ans.push_back(b[j]);
                j++, k++;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            for (int x : ans)
                cout << x << " ";
            cout << nl;
        }
        else
            cout << -1 << nl;
    }

    return 0;
}