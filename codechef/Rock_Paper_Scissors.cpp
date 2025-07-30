/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Rock-Paper-Scissors
URL: https://www.codechef.com/problems/MINRPC
=====================================================*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int req = (n / 2) + 1;
        string res = "";
        int score = 0;
        for (int i = 0; i < n; i++) {
            res += 'P';
            if (s[i] == 'R')
                score++;
        }

        if (score >= req)
        {
            cout << res << '\n';
        }
        else
        {
            for (int i = n-1; i >= 0; i--) {
                if (s[i] != 'R') {
                    if (s[i] == 'P')
                        res[i] = 'S';
                    else // s[i] == 'S'
                        res[i] = 'R';
                    score++;
                    if (score >= req)
                        break;
                }

            }
            cout << res << '\n';
        }


    }

}