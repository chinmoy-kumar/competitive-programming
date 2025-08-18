/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Far Away
URL: https://www.codechef.com/problems/FARAWAY
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > m / 2)
            {
                int temp = v[i] - 1;
                sum += temp;
            }
            else if (v[i] < m / 2)
            {
                int temp = m - v[i];
                sum += temp;
            }
            else if (v[i] == m / 2)
            {
                int temp = m - v[i];
                sum += temp;
            }
        }
        cout << sum << '\n';
    }

}