/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Desorting
URL: https://codeforces.com/contest/1853/problem/A
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
        vector<ll> v(n);
        vector<ll> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // Approch - 01
        //****************
        // v1 = v;
        // sort(v1.begin(), v1.end());
        // if(v1 != v) cout << 0 << nl;
        // else
        // {
        //     ll minDiff = INT_MAX;
        //     ll min1 = 0, min2 = 0;
        //     for (int i = 0; i < n-1; i++)
        //     {
        //         if(v[i+1] - v[i] < minDiff)
        //         {
        //             minDiff = v[i+1] - v[i];
        //             min1 = v[i];
        //             min2 = v[i+1];
        //         }
        //     }
        //     ll lstSubtrac = min2-min1;
        //     ll div = lstSubtrac / 2;
        //     cout << div + 1 << nl;            
        // }

        // Approch - 02
        //**************
        ll op = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i] <= v[i+1])
            {
                ll diff = v[i+1] - v[i];
                ll reqOp = (diff/2) + 1;
                op = min(op,reqOp);
            }
            else{
                op = 0;
                break;
            }
        }
        cout << op << nl;
        

    }

    return 0;
}