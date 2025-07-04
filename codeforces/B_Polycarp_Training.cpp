/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Polycarp Training
URL: https://codeforces.com/contest/1165/problem/B
=====================================================*/

/*
Approach:
- Read the number of problems Polycarp can train on.
- Store the number of problems in the i th contest in a multiset for sorted access.
- Initialize `ans` to count the number of days Polycarp can train and `problem` to track the minimum problems required for the current day.
- Iterate while the multiset is not empty:
    - Find the smallest problem set in the multiset that meets or near the current problem number.
    - If such a problem exists, increment `ans`, remove the problem from the multiset, and increase the required problems for the next day.
    - If no such problem exists, break the loop.
- Output the total number of days Polycarp can train (`ans`).

This approach uses a greedy algorithm with a multiset for efficient problem selection.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int ans = 0, problem = 1;
    while (!ml.empty())
    {
        auto LB = ml.lower_bound(problem);
        if (LB != ml.end())
        {
            ans++;
            ml.erase(LB);
        }
        else
            break;
        problem++;
    }

    cout << ans << '\n';

    return 0;
}