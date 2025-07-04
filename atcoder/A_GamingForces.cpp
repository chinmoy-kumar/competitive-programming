/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. GamingForces
URL: https://codeforces.com/problemset/problem/1792/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int health[n];
        int cnt = 0, other = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> health[i];
            if (health[i] == 1)
                cnt++;
            else
                other++;
        }

        long long int total = 0;
        if (cnt > 1)
        {
            if (cnt % 2 != 0)
                total = (cnt / 2 + 1) + other;
            else
                total = (cnt / 2) + other;
        }
        else
            total = cnt + other;
        cout << total << endl;
    }
}
