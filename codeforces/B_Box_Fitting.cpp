/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Box Fitting
URL: https://codeforces.com/contest/1498/problem/B
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the number of boxes and the width of the container.
- Store the widths of the boxes in a multiset for efficient management. Multiset because we need to sort the widths and allow duplicates.
- Initialize the height of the container to 1 and the current available width to the container's width.
- While there are boxes left in the multiset:
    - Find the largest box that fits in the current available width using `upper_bound`.
    - If no box fits, reset the available width to the container's width and increment the height.
    - Otherwise, place the box, reduce the available width, and remove the box from the multiset.
- Output the total height required for the current test case.

This approach uses a multiset to efficiently manage and retrieve the largest fitting box, ensuring an optimal solution.
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
        ll n, w;
        cin >> n >> w;

        multiset<ll> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int height = 1, currentWidth = w;
        while (!s.empty())
        {
            auto it = s.upper_bound(currentWidth);
            if (it == s.begin())
            {
                currentWidth = w;
                height++;
            }
            else
            {
                it--;
                currentWidth -= (*it);
                cout << *it << " ";
                s.erase(it);
            }
        }
        cout << height << nl;
    }
    return 0;
}