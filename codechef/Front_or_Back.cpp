/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Front or Back
URL: https://www.codechef.com/problems/FRONTBACK
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
	    vector<int> v(n), cnt(n, 0);
	    for (int i = 0; i < n; i++) {
	        cin >> v[i];
	        cnt[v[i]]++;
	    }
	    
	    const int mod = 998244353;
	    int ans = 1;
	    bool flag = true;
	    for (int i = 0; i < n/2; i++) {
	        if(cnt[i] + cnt[n-i-1] != 2)
	        {
	            flag = false;
	        }
	        ans = ans * 2 % mod;
	    }
	    if(flag == false)
	    {
	        cout << 0 << '\n';
	    }
	    else
	    {
	        cout << ans << '\n';
	    }
	}

}