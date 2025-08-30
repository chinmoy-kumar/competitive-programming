/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: B - Fibonacci Reversed
URL: https://atcoder.jp/contests/abc421/tasks/abc421_b
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
ll rev(int n)
{
    ll r = 0;
    while(n > 0)
    {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;
    cin >> x >> y;
    for (int i = 3; i <= 10; i++)
    {
        ll temp = rev(x + y);
        x = y;
        y = temp;
    }
    
    cout << y << nl;

    return 0;
}