/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: A. Question Marks
URL: https://codeforces.com/contest/1993/problem/A
=====================================================*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string str;
        cin >> str;

        long long int freq[4] = {0};
        for (auto x: str)
        {
            if(x != '?')
                freq[x-'A']++;
        }

        long long int res = 0;
        for (int i = 0; i < 4; i++) {
            res += min(n, freq[i]);
        }
        cout << res << '\n';
    }

}