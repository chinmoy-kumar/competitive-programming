/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. Segment with Big Sum
URL: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll s;
    cin >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 0, r = 0;
    ll sum = 0, ans = LLONG_MAX;
    while (r < n)
    {
        sum += v[r];

        while (sum >= s && l <= r)
        {
            ans = min(ans, (r - l + 1));
            sum -= v[l];
            l++;
        }
        r++;
    }
    if(ans == LLONG_MAX)
        cout << -1 << nl;
    else
        cout << ans << nl;

    return 0;
}