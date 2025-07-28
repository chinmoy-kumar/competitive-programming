/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Minimum Bottles
URL: https://www.codechef.com/problems/MINBOTTLES?tab=statement
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total +=  v[i];
        }

        cout << (total + x - 1)/x<< nl;

    }
    return 0;
}