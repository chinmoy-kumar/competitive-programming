/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Train and Queries
URL: https://codeforces.com/problemset/problem/1702/C
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the number of train stations and queries.
    - Use a map of sets to store the indices of each station number.
    - For each query:
        - Check if both station numbers exist in the map.
        - If either station number is missing, output "NO".
        - Otherwise, find the smallest index of the initial station and the largest index of the target station.
        - If the smallest index of the initial station is less than the largest index of the target station, output "YES". Because it can go only in direction from left to right.
        - Otherwise, output "NO".
- This approach uses maps and sets for efficient storage and lookup of indices.
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
        int n, k;
        cin >> n >> k;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0; i < k; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int startingLeftMostIndex = *mp[l].begin();
                int endingRightMostIndex = *mp[r].rbegin();

                if (startingLeftMostIndex < endingRightMostIndex)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}