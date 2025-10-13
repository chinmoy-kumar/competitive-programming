/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. Mex Master
URL: https://codeforces.com/contest/1806/problem/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

void solve(int t)
{
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int zero = 0, nonZero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 0) zero++;
            else nonZero++;
        }

        if(zero == 0) cout << 0 << nl;
        else if(zero-1 <= nonZero) cout << 0 << nl;
        else
        {
            int mx = *max_element(v.begin(), v.end());
            if(mx == 1) 
                cout << 2 << nl;
            else 
                cout << 1 << nl;
        }
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    solve(t);

    return 0;
}