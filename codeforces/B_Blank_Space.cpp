/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Blank Space
URL: https://codeforces.com/problemset/problem/1829/B
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
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        int mxBlank = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0)
                cnt++;
            else cnt = 0;

            if(mxBlank < cnt)
                mxBlank = cnt;
        }
        cout << mxBlank << nl;
        
    }

    return 0;
}