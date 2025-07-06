/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Sum to 0
URL: https://www.codechef.com/problems/SUM0
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            cout << -1 << nl;
            continue;
        }   

        if(n % 2 == 0)
        {
            for (int i = 0; i < n; i+=2)
            {
                cout << -1 << " " << 1 << nl;
            }
        }
        else
        {
            cout << -1 << " " << -1 << " " << 2 << nl;
            for (int i = 0; i < n-3; i+=2)
            {
                cout << -1 << " " << 1 << nl;
            }
        }
        
    }

    return 0;
}