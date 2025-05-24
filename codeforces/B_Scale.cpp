/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Scale
URL: https://codeforces.com/contest/1996/problem/B
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
        string s, ans;
        vector<string> res;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (i % k == 0)
            {
                for (int j = 0; j < s.size(); j += k)
                {
                    ans.push_back(s[j]);
                }
                res.push_back(ans);
                ans.clear();
            }
        }

        for (auto x : res)
        {
            cout << x << nl;
        }
    }

    return 0;
}