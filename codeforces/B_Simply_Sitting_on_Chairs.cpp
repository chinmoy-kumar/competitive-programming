/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Simply Sitting on Chairs
URL: https://codeforces.com/contest/2210/problem/B
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
        vector<int> v(n+1);
        for(int i = 1; i <= n; i ++)
            cin >> v[i];
        
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] <= i) cnt++;
        }
        
        cout << cnt << nl;
        

    }

    return 0;
}