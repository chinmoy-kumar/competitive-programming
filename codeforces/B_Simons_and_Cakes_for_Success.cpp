/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Simons and Cakes for Success
URL: https://codeforces.com/problemset/problem/2205/B
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
    while (t--)
    {
        ll n; cin >> n;
        int ans = 1;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                while(n % i == 0)  n /= i;
                ans *= i;
            }
        }
        if(n != 1) ans *= n;
        cout << ans << nl;
    }
        
    

    return 0;
}