/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Access Code Equality
URL: https://www.codechef.com/problems/WECNITK?tab=statement
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
    string t = "WECNITK";
    if(s == t)
        cout << "Welcome to Web Club!" << nl;
    else
        cout << "Access denied" << nl;

    return 0;
}