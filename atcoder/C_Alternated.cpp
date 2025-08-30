/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: C - Alternated
URL: https://atcoder.jp/contests/abc421/tasks/abc421_c
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> posA;
    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == 'A')
            posA.push_back(i);
    }

    ll cost1 = 0, cost2 = 0;

    for (int i = 0; i < n; i++)
    {
        ll t1 = 2LL * i;
        ll t2 = 2LL * i + 1;
        cost1 += llabs(posA[i] - t1);
        cost2 += llabs(posA[i] - t2);
    }

    cout << min(cost1, cost2) << nl;

    return 0;
}