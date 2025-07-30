/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Easy Subarray Sum
URL: https://www.codechef.com/viewsolution/1177358865
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
	    for (int i = 0; i < n; i++) {
	        cin >> v[i];
	    }
	    
	    int first = -1;
	    int last = n;
	    
	    for (int i = 0; i < n; i++) {
	        if(v[i] > 0)
	        {
	            if(first == -1) 
	                first = i;

                last = i;
	        }
	           
	    }
	    
	    int negCnt = 0;
	    
	    if(first != -1)
	    {
	        for (int i = first; i < last; i++) {
	            if(v[i] < 0)
	                negCnt++;
	        }
	    }
	    
	    cout << negCnt << '\n';
	}

}