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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = 0;
        int sum = 0, cnt = 0;
        while (r < n)
        {
            if (v[r] == 0)
                sum += 1;
            else
                sum = 0;
            if (sum == k)
            {
                cnt++;
                l = r + 2;
                r = r + 2;
                sum = 0;
            }
            else
            {

                r++;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}