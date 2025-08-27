/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Mark Points
URL: https://www.codechef.com/problems/MARKP?tab=statement
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int flag = 1;
	    
	    int i = 0, l = 0;
	    while(i < n)
	    {
	        if(s[i] == '1')
	        {
	            int j = i;
	            while(j < n && s[j] == '1')
	                j++;
	            l = j - i;
	            if(l < 3)
	            {
	                flag = 0;
	                break;
	            }
	            i = j;
	        }
	        else
	            i++;
	       
	    }
	    if(flag == 1)
            cout << "Yes" << '\n';
        else 
            cout << "No" << '\n';
	        
	}

}
