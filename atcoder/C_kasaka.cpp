/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: C - kasaka
URL: https://atcoder.jp/contests/abc237/tasks/abc237_c?lang=en
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

    ll n = s.size();
    int i, j;
    int front_a = 0, back_a = 0;
    for (i = 0; i < n; i++)
    {
        if(s[i] != 'a') break;
        front_a++;
    }

    for (j = n-1; j >= 0; j--)
    {
        if(s[j] != 'a') break;
        back_a++;
    }
    
    string res1, res2;
    for (int k = i; k <= j; k++)
    {
        res1 += s[k];
    }
    res2 = res1;
    reverse(res2.begin(), res2.end());

    if(front_a > back_a || res1 != res2)
        cout << "No" << nl;
    else cout << "Yes" << nl;
    
    

    return 0;
}