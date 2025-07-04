#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, x;
    cin >> r >> x;
    if (x == 1 && r >= 1600 && r <= 2999)
    {
        cout << "Yes" << nl;
    }
    else if (x == 2 && r >= 1200 && r <= 2399)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;

    return 0;
}