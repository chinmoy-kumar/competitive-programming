/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Make it White
URL: https://codeforces.com/contest/1927/problem/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int start = -1, end = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (start == -1)
                    start = i;
                end = i;
            }
        }
        int result = (end - start + 1);
        cout << result << "\n";
    }

    return 0;
}
