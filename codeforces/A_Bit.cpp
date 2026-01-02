/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Bit++
URL: https://codeforces.com/contest/282/problem/A
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s == "X--" || s == "--X") sum -= 1;
        else sum += 1;
    }
    cout << sum << nl;
    

    return 0;
}