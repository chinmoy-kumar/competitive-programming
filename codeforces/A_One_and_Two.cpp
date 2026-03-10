/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. One and Two
URL: https://codeforces.com/problemset/problem/1788/A
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
        int n;
        cin >> n;
        vector<int> v(n);

        int twoCnt = 0, oneCnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        
            if(v[i] == 2) twoCnt++;
            else oneCnt++;
        }

        if(twoCnt % 2 != 0) cout << -1 << nl;
        else if(oneCnt == n) cout << 1 << nl;
        else
        {
            int mid = twoCnt / 2;
            int cnt = 0, res = 0;
            for (int i = 0; i < n; i++)
            {
                if(v[i] == 2 && cnt < mid) 
                {
                    res = i+1;
                    cnt++;
                }
            }
            cout << res << nl;
        }



        
    }

    return 0;
}