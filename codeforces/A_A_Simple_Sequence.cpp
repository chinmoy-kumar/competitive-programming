/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. A Simple Sequence
URL: https://codeforces.com/contest/2210/problem/A
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
        for (int i = 0; i < n; i++)
        {
            v[i] = i+1;
        }
        sort(v.begin(), v.end());
        for (int i = n-1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        
        cout << nl;
    }

    return 0;
}