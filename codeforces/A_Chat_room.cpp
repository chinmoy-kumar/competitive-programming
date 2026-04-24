/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Chat room
URL: https://codeforces.com/problemset/problem/58/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string str = "hello";
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == str[cnt])
        {
            cnt++;
        }
        
        if(cnt == 5)
        {
          flag = false;  
          break;
        } 
    }

    if(flag == false) cout << "YES" << nl;
    else cout << "NO" << nl;

    

    return 0;
}