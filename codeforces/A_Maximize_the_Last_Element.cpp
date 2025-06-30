#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        int mx = 0;
        for (int i = 0; i < n; i+=2)
        {
            mx = max(mx, v[i]);
        }
        cout << mx << nl;
                
    }

    return 0;
}