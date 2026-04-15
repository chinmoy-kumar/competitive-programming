/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Mickey Mouse Constructive
URL: https://codeforces.com/contest/2211/problem/B
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
    while(t--)
    {
        int x, y;
        cin >> x >> y;
    
        int diff = abs(x - y);
    
        if (diff == 0)
            cout << 1 << nl;
        else
        {
            int ans = 0;
            for (int i = 1; i <= diff; i++)
            {
                if (diff % i == 0)
                    ans++;
                ans = ans % 676767677;
            }
            cout << ans << nl;
        }
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << nl;
         
    }

    return 0;
}