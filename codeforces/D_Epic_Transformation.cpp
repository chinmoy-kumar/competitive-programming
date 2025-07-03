/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Epic Transformation
URL: https://codeforces.com/problemset/problem/1506/D
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the number of elements in the array.
    - Use a map to count the frequency of each element.
    - Push all frequencies into a max-heap (priority queue).
    - While the heap has at least two elements:
        - Remove the top two elements (highest frequencies).
        - Decrease both frequencies by 1 (simulate removing one pair of elements).
        - If the decremented frequencies are still greater than 0, push them back into the heap.
    - After processing, the heap will contain the remaining unpaired elements.
    - Sum up the remaining frequencies in the heap to get the result.
- Output the result for each test case.

This approach uses a greedy strategy with a max-heap to minimize the remaining elements.
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;

            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << '\n';
    }

    return 0;
}