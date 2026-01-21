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
        ll n, q;
        cin >> n >> q;
        ll mxVal = 600;
        vector<char> vt;
        vector<ll> v(q);
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n; i++)
            if(s[i] == 'B') flag = true;
        
        for (int i = 0; i < q; i++)
            cin >> v[i];

        ll idx = 0;
        for (int i = 0; i < mxVal; i++)
        {
            vt.push_back(s[idx]);
            idx++;
            if(idx == n) idx = 0;
        }
        
        for (int i = 0; i < q; i++)
        {
            ll a = v[i], cnt = 0;
            if(!flag)
            {
                cout << a << nl; continue;
            }
            for (int j = 0; j < mxVal; j++)
            {
                if(vt[j] == 'A')
                {
                    a--; cnt++;
                }
                else 
                {
                    a /= 2; cnt++;
                }

                if(a <= 0) break;   
            }
            cout << cnt << nl;

        }
        
    }
    return 0;
}