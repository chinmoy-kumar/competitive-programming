/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Square Year
URL: https://codeforces.com/problemset/problem/2114/A
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
        string s;
        cin >> s;

        stringstream ss(s);
        int year;
        ss >> year;

        int r = int(sqrt(year));
        if(r * r != year)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << 0 << " " << r << nl;
        }

    }

    return 0;
}