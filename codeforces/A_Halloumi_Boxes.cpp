#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> v(n);
        vector<ll> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        v2 = v;
        sort(v2.begin(), v2.end());
        if(k == 1 && v == v2) cout << "YES" << nl;
        else if(k == 1 && v != v2) cout << "NO" << nl;
        else cout << "YES" << nl;
        

    }

    return 0;
}