/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Flip the Bit (Easy Version)
URL: https://codeforces.com/contest/2217/problem/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

/* 
    Observation:
    * We have inital bit at v[p];
    * We have to make all bits equal to v[p];
    * if it's one make all the array 1 in min operation;
    * selecting range must have special index;
 */

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, p; cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cin >> p;
        p--;

        int l = 0, r = 0;
        for (int i = 0; i < p; i++)
            if(v[i] != v[i + 1]) l += 1;
        
        for (int i = p; i < n-1; i++)
            if(v[i] != v[i + 1]) r += 1;
        
        int ans = max(l, r) + max(l, r) % 2;
        cout << ans << nl;    
        
    }

    return 0;
}