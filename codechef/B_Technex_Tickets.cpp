/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Technex Tickets
URL: https://www.codechef.com/problems/P2_175
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

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i+1);
        }

        int second = 0;
        while(1)
        {
            second++;
            if(v[0] == n || v[2] == n)
            {
                cout << second << nl;
                break;
            }

            v.erase(v.begin());
            v.erase(v.begin()+2);

        }
        
    }

    return 0;
}