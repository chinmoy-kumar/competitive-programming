/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Everybody Likes Good Arrays!
URL: https://codeforces.com/contest/1777/problem/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
    /*--- Approch-01 ---*/
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int op = 0;

        if(v.size() == 1)
        {
            cout << 0 << nl;
            continue;
        }

        for (int i = 0; i < v.size()-1; i++)
        {
            if((v[i] %2 == 0 && v[i+1] % 2 == 0) || (v[i] % 2 != 0 && v[i+1] % 2 != 0)) op++;
        }
        cout << op << nl;
        
    /*--- Approch-02 ---*/
    /*    int n;
            cin >> n;
            vector<ll> v(n);
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
            }
 
            int op = 0;
 
            if(v.size() == 1)
            {
                cout << 0 << nl;
                continue;
            }
            for (int i = 0; i < v.size()-1; i++)
            {
                if((v[i] %2 == 0 && v[i+1] % 2 == 0) || (v[i] % 2 != 0 && v[i+1] % 2 != 0))
                {
                    ll tmp = v[i] * v[i+1];
                    v[i] = tmp;
                    v.erase(v.begin() + (i+1));
                    i = -1;
                    op++;
                }
            }
            cout << op << nl;
    */
    }


    return 0;
}