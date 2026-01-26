/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: 1901A - Line Trip
URL: https://codeforces.com/problemset/problem/1901/A
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
        int n, x;
        cin >> n >> x;
        vector<int>v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int mx_fuel = (x - v[n])*2;

        for (int i = 0; i < n; i++)
        {
            int temp = v[i+1] - v[i];
            if(mx_fuel < temp) mx_fuel = temp;
        }

        cout << mx_fuel << nl;
    }

    return 0;
}