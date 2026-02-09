/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Aleksa and Stack
URL: https://codeforces.com/contest/1878/problem/B
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
        int n;
        cin >> n;

        int x = 1;
        for (int i = 0; i < n; i++)
        {
            cout << x << " ";
            x+=2;
        }
        cout<< nl;
        
    }

    return 0;
}