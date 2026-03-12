#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        //-----Approach - 01-----
        ll n; cin >> n;
        ll x = 1, v = 1, c = 1;
        ll ans = 0;
        while(x <= n)
        {
            ans++;
            x+=v;
            if(c == 9)
            {
                c = 1;
                v *= 10;
                x = v;
                continue;
            }
            c++;
        }
        cout << ans << nl;

        //-----Approach - 02-----
/*      int n;
        cin>>n;
        int ans=0;
        if(n<10) ans=n;
        else if(n<100) ans=9+n/10;
        else if(n<1000) ans=18+n/100;
        else if(n<10000) ans=27+n/1000;
        else if(n<100000) ans=36+n/10000;
        else ans=45+n/100000;
      
        cout<<ans<<endl; */
    }

    return 0;

}