/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Cookie Day
URL: https://www.codechef.com/problems/ADVITIYA3
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
        long long int k;
        cin >> k;

        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int ans = -3;
        long long int waste = 0;
        long long int tempWaste = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k)
            {
                long long int currentTemp = v[i] / k;
                waste = v[i] - (currentTemp * k);
                if (tempWaste > waste)
                {
                    tempWaste = waste;
                    ans = waste;
                }
            }
        }
        if (ans == -3)
            cout << "-1" << '\n';
        else
            cout << ans << endl;
    }

    return 0;
}