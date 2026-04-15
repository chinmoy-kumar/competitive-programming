/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: 
URL: 
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
        
        unordered_map<int, int> mp;
        int mx = n * (n-1);
        bool flag = true;
        int x;
        for (int i = 0; i < n*n; i++)
        {
            cin >> x;
            mp[x]++;
            if(mp[x] > mx)
            {
                flag = false;
            }
        }
        if(flag == false ? cout << "NO" << nl : cout << "YES" << nl);
        


    }

    return 0;
}