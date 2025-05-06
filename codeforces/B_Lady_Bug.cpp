/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Lady Bug
URL: https://codeforces.com/contest/2092/problem/B
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the length of the strings and the two strings `s1` and `s2`.
    - Initialize counters `cnt1` and `cnt2` to track mismatches based on parity (odd/even indices).
    - Iterate through the strings:
        - For odd indices, adjust `cnt2` if `s1[i]` is '1' and adjust `cnt1` if `s2[i]` is '0'.
        - For even indices, adjust `cnt1` if `s1[i]` is '1' and adjust `cnt2` if `s2[i]` is '0'.
    - After processing the strings, check if both counters are non-negative:
        - If true, output "YES".
        - Otherwise, output "NO".
- This approach ensures that the conditions for the problem are met by analyzing mismatches at odd and even indices.
*/
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
        string s1, s2;
        cin >> s1 >> s2;

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2) // odd
            {
                if (s1[i] == '1')
                {
                    cnt2--;
                }
                if (s2[i] == '0')
                {
                    cnt1++;
                }
            }
            else // even
            {
                if (s1[i] == '1')
                {
                    cnt1--;
                }
                if (s2[i] == '0')
                {
                    cnt2++;
                }
            }
        }

        if (cnt1 >= 0 && cnt2 >= 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}