/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Airport Management
URL: https://www.codechef.com/problems/AIRM
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
        vector<int> arrive(n);
        vector<int> depart(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arrive[i];
            mp[arrive[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> depart[i];
            mp[depart[i]]++;
        }

        int mx = 0;
        for (auto x : mp)
        {
            mx = max(x.second, mx);
        }
        cout << mx << nl;
    }

    return 0;
}