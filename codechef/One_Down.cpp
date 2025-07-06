/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: One Down 
URL: https://www.codechef.com/problems/FSTS
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
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int oneZero = 0, zeroOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && t[i] == '0')
                oneZero++;
            if (s[i] == '0' && t[i] == '1')
                zeroOne++;
        }

        if (oneZero % 2 || zeroOne)
            cout << "No" << nl;
        else
            cout << "Yes" << nl;
    }

    return 0;
}