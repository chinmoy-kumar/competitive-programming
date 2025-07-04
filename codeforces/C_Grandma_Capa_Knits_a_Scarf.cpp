/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Grandma Capa Knits a Scarf
URL: https://codeforces.com/problemset/problem/1582/C
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
        string s;
        cin >> s;

        int ans = 1e9;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int l = 0, r = n - 1, remove = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else
                {
                    if (s[l] == i)
                    {
                        remove++;
                        l++;
                    }
                    else if (s[r] == i)
                    {
                        remove++;
                        r--;
                    }
                    else
                    {
                        remove = 1e9;
                        break;
                    }
                }
            }
            ans = min(ans, remove);
        }

        if (ans == 1e9)
            cout << -1 << nl;
        else
            cout << ans << nl;
    }

    return 0;
}