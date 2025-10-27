/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: B - Matrix Transposition
URL: https://atcoder.jp/contests/abc237/tasks/abc237_b?lang=en
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;

    ll arr[h][w];
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (ll i = 0; i < w; i++)
    {
        for (ll j = 0; j < h; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << nl;
    }


    return 0;
}