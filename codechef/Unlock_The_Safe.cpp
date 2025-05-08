/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Unlock The Safe
URL: https://www.codechef.com/problems/UNLOCKSAFE
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the size of the arrays `a` and `b` and the maximum allowed moves `k`.
    - Calculate the minimum moves required to align each digit of `a` to `b` using the shortest path on a circular dial.
    - Track the difference between the maximum and minimum moves for each digit alignment.
    - Compute the total moves required and the remaining moves after aligning all digits.
    - Check if the remaining moves are sufficient to make the alignment possible:
        - If remaining moves are negative, output "No".
        - If remaining moves are even or the smallest difference can be adjusted within the remaining moves, output "Yes".
        - Otherwise, output "No".
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
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int move = 0;
        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            int cnt = min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
            int cnt2 = max(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
            move += cnt;
            diff.push_back(cnt2 - cnt); // odd
        }

        int remain = k - move;
        int minDiff = INT_MAX;
        for (int i = 0; i < diff.size(); i++)
        {
            minDiff = min(minDiff, diff[i]); // odd
        }

        if (remain < 0)
            cout << "No" << nl;
        else if (remain % 2 == 0 || minDiff <= remain)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }

    return 0;
}