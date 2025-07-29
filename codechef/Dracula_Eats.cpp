/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Dracula Eats
URL: https://www.codechef.com/problems/CHEAT
=====================================================*/
#include <bits/stdc++.h>
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

        int full = n/7;
        int r = n%7;
        int extra = 0;
        if(r >= 2)
            extra = 1;
        cout << full + extra << "\n";

    }

    return 0;
}