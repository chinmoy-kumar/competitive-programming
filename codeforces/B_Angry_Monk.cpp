/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. Angry Monk
URL: https://codeforces.com/contest/1992/problem/B
=====================================================*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        vector < long long int > v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }

        long long int res = 0, mx = 0;
        for (int i = 0; i < k; i++) {
            res += (2 * v[i] - 1);

            if (v[i] > mx)
            {
                mx = v[i];
            }
        }
            res -= (2 * mx - 1);

    cout << res << '\n';
    }



}