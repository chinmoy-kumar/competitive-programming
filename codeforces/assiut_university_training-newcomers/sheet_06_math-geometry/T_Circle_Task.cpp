#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

ll distance(ll x, ll y, ll x1, ll y1)
{
    ll a = pow(x1-x, 2);
    ll b = pow(y1-y, 2);
    ll res = sqrt(a+b);

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y, radius, t;
    cin >> x >> y >> radius >> t;
    while(t--)
    {
        ll x1, y1; cin >> x1 >> y1;
        
        ll dis = distance(x, y, x1, y1);
        if(dis <= radius) cout << "YES" << nl;
        else cout << "NO" << nl;

    }

    return 0;
}