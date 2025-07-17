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
        string s;
        cin >> s;
        int sz = s.size();
        if (s.size() == 1)
        {
            cout << s << nl;
        }
        else
        {
            sort(s.begin(), s.end());
            cout << s[0] << nl;
        }
    }

    return 0;
}