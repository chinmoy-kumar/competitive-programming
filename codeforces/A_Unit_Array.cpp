/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Unit Array
URL: https://codeforces.com/problemset/problem/1834/A
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
        int posOne = 0, negOne = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == -1) negOne++;
            else posOne++; 
        }
        int op = 0;
        while(negOne > posOne || negOne % 2 != 0)
        {
            op++;
            negOne--;
            posOne++;
        }
        cout << op << nl;


        
    }

    return 0;
}