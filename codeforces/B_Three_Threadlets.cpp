/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Three Threadlets
URL: https://codeforces.com/contest/1881/problem/B
=====================================================*/
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
        vector<ll> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        bool flag = false; 
        int cnt = 0;
        if(v[1]%v[0] != 0 || v[2]%v[0] != 0) flag = true;
        
        while(v[1] != v[0])
        {
            if(v[1]%v[0] != 0 || cnt > 3)
            {
                flag = true; 
                break;
            }
            v[1] -= v[0];
            cnt++;
        }
        while(v[2] != v[0])
        {
            if(v[2]%v[0] != 0 || cnt > 3)
            {
                flag = true; 
                break;
            }
            v[2] -= v[0];
            cnt++;            
        }
        if(cnt > 3) flag = true;
        if(flag) cout << "NO" << nl;
        else cout << "YES" << nl;

        
    }

    return 0;
}