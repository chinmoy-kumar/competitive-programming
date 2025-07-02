/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Black and White Stripe
URL: https://codeforces.com/contest/1690/problem/D
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the string length (n), window size (k), and the string (s).
- Use a sliding window of size k to find the minimum number of 'W' (white) characters in any substring of length k.
- Initialize two pointers (l and r) for the window and a counter for white characters.
- Move the window across the string, updating the count of white characters as the window slides.
- For each window, update the answer with the minimum number of white characters found.
- Output the minimum number of white characters to be changed for each test case.

This is an efficient sliding window solution for substring analysis.
*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = 0, ans = INT_MAX, white = 0;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                white++;
            }

            if (r - l + 1 == k)
            {
                ans = min(ans, white);
                if (s[l] == 'W')
                {
                    white--;
                }
                l++;
            }
            r++;
        }
        cout << ans << nl;
    }

    return 0;
}