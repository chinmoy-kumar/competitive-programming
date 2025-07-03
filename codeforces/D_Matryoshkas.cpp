/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Matryoshkas
URL: https://codeforces.com/problemset/problem/1790/D
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
        multiset<ll> ml;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }
        while (!ml.empty())
        {
            ll curr = *ml.begin();
            ml.erase(ml.begin());

            while (true)
            {
                auto it = ml.find(curr + 1);

                if (it != ml.end())
                {
                    curr = *it;
                    ml.erase(it);
                }
                else
                {
                    break;
                }
            }
            ans++;
        }
        cout << ans << nl;
    }

    return 0;
}