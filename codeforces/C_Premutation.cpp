/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Premutation
URL: https://codeforces.com/problemset/problem/1790/C
=====================================================*/
/*
Approach:
- For each test case, read the integer n (length of the original permutation).
- Read n sequences of length n-1. Each sequence is the original permutation with one element skipped.
- Track the frequency of each number at the first position of the sequences.
- The number that appears most frequently at the first position is the first element (maxFreq) of the original permutation.
- Find the one sequence that does NOT start with this number — it contains the remaining elements (p2 to pn).
- Reconstruct the permutation by placing maxFreq value at the beginning of that sequence.
- Output the final permutation.

This approach leverages the structure of how the sequences were generated — only one skips the first element, making p1 identifiable.
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
        vector<vector<int>> v(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }

        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[v[i][0]]++;
        }

        int maxFreq, best = INT_MIN;
        for (auto x : freq)
        {
            if (x.second > best)
            {
                best = x.second;
                maxFreq = x.first;
            }
        }

        vector<int> target;
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != maxFreq)
            {
                target = v[i];
                break;
            }
        }

        cout << maxFreq << " ";
        for (auto x : target)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}