/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Indian Summer
URL: https://codeforces.com/problemset/problem/44/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }

    cout << mp.size() << '\n';


    return 0;
}