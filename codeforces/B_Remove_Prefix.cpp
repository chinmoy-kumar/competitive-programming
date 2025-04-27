/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Remove Prefix
URL: https://codeforces.com/problemset/problem/1714/B
=====================================================*/

/*
Approach:
- Read the number of test cases.
- For each test case, read the size of the array and the array elements.
- Use a set to track unique elements from the end of the array.
- Traverse the array from the last element to the first.
    - If an element is already in the set, record the position and stop.
    - Otherwise, add the element to the set.
- If all elements are unique, output 0.
- Otherwise, output the recorded position.
- This approach ensures efficient detection of duplicates using a set.
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> s;
        int cnt = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.count(v[i]))
            {
                cnt = i + 1;
                break;
            }
            else
            {
                s.insert(v[i]);
            }
        }

        if (s.size() == n)
            cout << 0 << '\n';
        else
            cout << cnt << '\n';
    }

    return 0;
}