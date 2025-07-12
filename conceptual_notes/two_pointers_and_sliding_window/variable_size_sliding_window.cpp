#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/*
Approach:
- Read the size of the array (n) and the maximum allowed sum (k).
- Use two pointers (l and r) to maintain a sliding window over the array.
- Expand the window by moving the right pointer (r) and adding the current element to the sum.
- If the sum exceeds k, shrink the window from the left by moving the left pointer (l) and subtracting the leftmost element from the sum.
- Keep track of the maximum window size where the sum does not exceed k.
- Output the maximum window size found.

This is a classic sliding window problem for finding the longest subarray with sum at most k.
*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= k)
        {
            ans = max(ans, r - l + 1);
            // r++;
        }
        else
        {
            sum -= a[l];
            l++;
            // r++;
        }
        r++;
    }
    cout << ans << nl;

    return 0;
}