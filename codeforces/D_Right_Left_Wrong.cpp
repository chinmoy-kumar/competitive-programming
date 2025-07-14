/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: D. Right Left Wrong
URL: https://codeforces.com/contest/2000/problem/D
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
        ll arr[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;

        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            arr[i] = arr[i] + arr[i - 1];
        }

        int last = n;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                int flag = 0;
                for (int j = last - 1; j > i; j--)
                {
                    if (s[j] == 'R')
                    {
                        last = j;
                        flag = 1;
                        break;
                    }
                    else
                    {
                        last--;
                    }
                }
                if (flag == 1)
                    ans += arr[last + 1] - arr[i];
            }
        }
        cout << ans << nl;
    }

    return 0;
}