/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Gotta Catch Em All
URL: https://www.codechef.com/problems/GCEA
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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int totalCost = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] * x > y)
                totalCost += y;
            else
                totalCost += v[i] * x;
        }

        cout << totalCost << '\n';
    }

    return 0;
}