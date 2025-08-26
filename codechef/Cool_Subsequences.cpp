/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Cool Subsequences
URL: https://www.codechef.com/problems/COOLSUB
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int flag = 0;
        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                cout << 1 << nl;
                cout << x.first << nl;
                flag = 1;
                break;
            }
        }

        if (flag)
            continue;
        else
            cout << -1 << nl;
    }

    return 0;
}