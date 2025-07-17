#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
bool compare(vector<ll>& a, vector<ll>& b)
{
    return a[2] < b[2];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<vector<ll>> v(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ll x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        sort(v.begin(), v.end(), compare);

        for (int i = 0; i < n; i++)
        {
            if(v[i][0] <= k && v[i][1] >= k)
            {
                k = max (k, v[i][2]);

            }
        }
        cout << k << nl;

        
    }

    return 0;
}