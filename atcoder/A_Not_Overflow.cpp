/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: A - Not Overflow
URL: https://atcoder.jp/contests/abc237/tasks/abc237_a
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if(n > -pow(2, 31) && n <= pow(2, 31)-1) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}