/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Balanced Lighting
URL: https://www.codechef.com/problems/RBLT
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
        vector<int> v(n);
        int red = 0, blue = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                red++;
            if (v[i] == 2)
                blue++;
        }

        if (n % 2 == 1 || red > n / 2 || blue > n / 2)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }
}