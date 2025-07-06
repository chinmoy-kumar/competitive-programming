/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: S to T
URL: https://www.codechef.com/problems/STOT
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
	    string iStr, tStr;
	    cin >> iStr >> tStr;
	    
	    if(iStr[0] != tStr[0])
	    {
	        cout << -1 << '\n';
	        
	    }
	    else
	    {
	        vector<int> ans;
	        for (int i = 1; i < n; i++) 
            {
	            if(iStr[i] == '0' && tStr[i-1] == '1')
	            {
	                iStr[i] = '1';
	                ans.push_back(i);
	            }
	        }
	        
	        bool flag = true;
	        
	        for(int i = n-1; i > 0; i--)
	        {
	            if(iStr[i] != tStr[i])
	            {
	                if(iStr[i-1] == '1')
	                {
	                    iStr[i] = tStr[i];
	                    ans.push_back(i);
	                }
	                else
	                {
	                    flag = false;
	                }
	            }
	        }
	        
	        if(!flag)
	            cout << -1 << '\n';
	        else
	        {
	            cout << ans.size() << '\n';
	            for(int x : ans)
	                cout << x << " ";
	            cout << '\n';
	        }
	            
	        
	    }
	}

}
