#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        ll x = n*k;
        ll ans = x - (k-1);
        cout << ans << nl;
        
    }

    return 0;
}