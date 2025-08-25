/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Advitiya
URL: https://www.codechef.com/problems/ADVITIYA
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s;
        t = "ADVITIYA";
        int ans = 0;

        for (int i = 0; i < 8; i++)
        {
            if (t[i] != s[i])
                ans += (t[i] - s[i] + 26) % 26; 
        }

        cout << ans << endl;
    }

    return 0;
}