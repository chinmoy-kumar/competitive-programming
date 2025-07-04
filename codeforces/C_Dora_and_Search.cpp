/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Dora and Search
URL: https://codeforces.com/problemset/problem/1793/C
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the size of the array and the array elements.
- Use a set to sort elements in the array.
- Initialize two pointers, `l` (left) and `r` (right), to the start and end of the array.
- While `l` is less than `r`:
    - Find the smallest and largest elements in the set.
    - If the smallest or largest element matches the value at `l`, increment `l` and remove the element from the set.
    - Else if the smallest or largest element matches the value at `r`, decrement `r` and remove the element from the set.
    - Otherwise, break the loop.
- After the loop, if `l` is still less than `r`, output the 1-based indices of `l` and `r`.
- If no such indices are found, output -1.
- This approach uses two pointers and a set to efficiently find the required indices.
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
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        int l = 0, r = n - 1;
        while (l < r)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();

            if (mn == v[l] || mx == v[l])
            {
                st.erase(v[l]);
                l++;
            }
            else if (mn == v[r] || mx == v[r])
            {
                st.erase(v[r]);
                r--;
            }
            else
                break;
        }

        if (l < r)
        {
            cout << l + 1 << " " << r + 1 << nl;
        }
        else
            cout << -1 << nl;
    }
    return 0;
}