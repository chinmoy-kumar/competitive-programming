/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: A - T-shirt
URL: https://atcoder.jp/contests/abc242/tasks/abc242_a 
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if (x > b)
    {
        cout << 0.000000000000 << nl;
    }
    else if(x <= a)
    {
        cout << 1.000000000000 << nl;
    }
    else
    {
        int temp = b - a;
        double res = c / (double)temp;

        cout << res << nl;
    }

    return 0;
}