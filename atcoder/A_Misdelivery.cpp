/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: A - Misdelivery
URL: https://atcoder.jp/contests/abc421/tasks/abc421_a
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v[i] = x;
    }

    int t; 
    cin >> t;
    string s;
    cin >> s;

    if(v[t-1] == s)
        cout << "Yes" << nl;
    else cout << "No" << nl;
    

    return 0;
}