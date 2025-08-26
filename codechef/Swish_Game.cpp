/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Swish Game
URL: https://www.codechef.com/viewsolution/1185522595
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
        int k, m;
        cin >> m >> k;

        string s;
        cin >> s;

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < m; i++)
        {
            if(s[i] == 'S') cnt1++;
            if(s[i] == 'P') cnt2++;
        }

        if(cnt1 >= k) cout << m << nl;
        else {
            int x = k - cnt1;
            int res = m + (x-1);
            cout << res << nl;
        }
        
    }

    return 0;
}