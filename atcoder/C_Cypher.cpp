/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Cypher
URL: https://codeforces.com/problemset/problem/1703/C
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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;

            for (int m : s)
            {
                if (m == 'U')
                    v[i] = (v[i] - 1 + 10) % 10;
                else
                    v[i] = (v[i] + 1 + 10) % 10;
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}