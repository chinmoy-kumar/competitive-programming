/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Don't Try to Count
URL: https://codeforces.com/contest/1881/problem/A
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
        int n,m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int cnt = 0;
        while(x.size() < s.size())
        {
            x += x;
            cnt++;
        }
        if(x.find(s) != -1)
        {
            cout << cnt << nl;
            continue;
        }
        x+=x;
        cnt++;
        if(x.find(s) != -1)
        {
            cout << cnt << nl;
            continue;
        }
        cout << -1 << nl;
    }

    return 0;
}