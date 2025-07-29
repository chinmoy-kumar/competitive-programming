/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Deletion and Difference
URL: https://www.codechef.com/problems/DELDIF
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    map<int, int> mp;
	    for (int i = 0; i < n; i++) {
	        cin >> v[i];
	        mp[v[i]]++;
	    }
	    
        for(auto &x : mp)
        {
            if(x.first == 0)
                continue;
            mp[0] += (x.second / 2);
            x.second = x.second % 2;
        }
        
        int ans = 0;
        for(auto x : mp)
        {
            if(x.first == 0 && x.second > 0)
            {
                ans++;
            }
            else
            {
                ans += x.second;
            }
        }
        cout << ans << '\n';
	}

}