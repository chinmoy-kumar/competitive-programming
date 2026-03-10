/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Minimum Distinct
URL: https://www.codechef.com/problems/MINDIS6?tab=statement
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n, k; cin >> n >> k;
        unordered_map<int, int> mp;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        
        int target = v[0];
        vector<int> freqCnt;
        for(auto x : mp)
        {
            if(x.first == v[0]) continue;
            else freqCnt.push_back(x.second);
        }
        
        sort(freqCnt.begin(), freqCnt.end());
        int distNum = mp.size();
        int eleminate = 0;
        for(auto f : freqCnt)
        {
            if(k >= f)
            {
                k -= f;
                eleminate++;
            }
        }
        int res = distNum - eleminate;
        cout << res << '\n';
	}

}
