/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Endless Play
URL: https://www.codechef.com/START202D/problems/
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, h;
    cin >> x >> h;

    int t = (x - 4) * 24;

    cout << t + h << nl;

    return 0;
}