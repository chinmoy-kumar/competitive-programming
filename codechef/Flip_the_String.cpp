/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Flip the String
URL: https://www.codechef.com/problems/FLIP
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 0; i < a.length(); i += 2) {
            if (a[i] != b[i])
            {
                while (i < a.length() && a[i] != b[i])
                {
                    i += 2;
                }
                ans++;
            }
        }

        for (int i = 1; i < a.length(); i += 2)
        {
            if (a[i] != b[i])
            {
                while (i < a.length() && a[i] != b[i])
                {
                    i += 2;
                }
                ans++;
            }

        }
        cout << ans << '\n';
    }

}