/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Two Rolls
URL: https://www.codechef.com/START202D/problems/TWOROLL
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
        int x, y;
        cin >> x >> y;

        int a = 50 - x;

        if (2*y <= a && 2*y + 10 >= a)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }

    return 0;
}