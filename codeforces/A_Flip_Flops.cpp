/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Flip Flops
URL: https://codeforces.com/contest/2209/problem/A
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
        ll c, k;
        cin >> c >> k;  
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= c)
            {
                ll diff = c - v[i];
                if (k > 0)
                {
                    if (diff <= k)
                    {
                        k = k - diff;
                        v[i] = v[i] + diff;
                    }
                    else
                    {
                        v[i] = v[i] + k;
                        k = 0;
                    }
                }
                c = c + v[i];
            }
            else{
                break;
            }
        }
        cout << c << nl;
    }

    return 0;
}