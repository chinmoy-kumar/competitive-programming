/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. Following the String
URL: https://codeforces.com/problemset/problem/1927/B
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
        string s = "abcdefghijklmnopqrstuvwxyz";

        map<char, int> mp;
        for (int i = 0; i < 26; i++)
        {
            mp[s[i]] = 0;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto x : mp)
            {
                if (x.second == v[i])
                {
                    cout << x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}