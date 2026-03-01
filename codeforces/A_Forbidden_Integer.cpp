/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Forbidden Integer
URL: https://codeforces.com/problemset/problem/1845/A
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
        int n, k, x;
        cin >> n >> k >> x;

        if(x != 1)
        {
            cout << "YES" << nl;
            cout << n << nl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }
        else
        {
            if(k == 1) cout << "NO";
            else if(k == 2 && n%2 != 0) cout << "NO";
            else
            {
                if(n%2 == 0)
                {
                    cout << "YES" << nl;
                    int rng = n / 2;
                    cout << rng << nl;
                    for (int i = 0; i < rng; i++)
                        cout << 2 << " ";
                }
                else
                {
                    cout << "YES" << nl;
                    int rng = (n-3)/2;
                    cout << rng+1 << nl;
                    cout << 3 << " ";
                    for (int i = 0; i < rng; i++)
                    {
                        cout << 2 << " ";
                    }
                    
                }
            }
        }
        cout << nl;
    }

    return 0;
}