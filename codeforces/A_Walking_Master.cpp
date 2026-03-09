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
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        ll op = 0;
        if (b > y)
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            op += y - b;
            a = a + op;
            if (a < x)
            {
                cout << -1 << nl;
                continue;
            }   
            else
            {
                op += a - x;
            }
        }
        cout << op << nl;
    }

    return 0;
}