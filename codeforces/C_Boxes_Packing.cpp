/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Boxes Packing
URL: https://codeforces.com/contest/903/problem/C
=====================================================*/
/*
Approach:
- Read the number of boxes.
- Use a map to count the frequency of each box size.
- Iterate through the map to find the maximum frequency.
- The maximum frequency represents the minimum number of stacks required.
This is a frequency counting problem using maps for efficient computation.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> box(n+1);
    map<long long int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
        freq[box[i]]++;
    }

    int ans = 0;
    for(auto [x, y] : freq)
        ans = max(ans, y);
    cout << ans;

    return 0;
}