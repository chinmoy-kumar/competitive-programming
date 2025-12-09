/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Cover in Water
URL: https://codeforces.com/problemset/problem/1900/A
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
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.') count++;
            if(s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
            {
                flag = true;
            }
        }
        if(flag == true) cout << 2 << nl;
        else cout << count << nl;
    }

    return 0;
}