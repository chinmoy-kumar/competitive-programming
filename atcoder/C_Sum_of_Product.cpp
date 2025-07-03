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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= v[i];
        ans += v[i] * sum;
    }
    cout << ans << nl;

    return 0;
}