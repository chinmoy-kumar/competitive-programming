/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: All Odd Prefix Sums
URL: https://www.codechef.com/START197D/problems/ODDPREFSUM
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
	    int oddCnt = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> v[i];
	        if(v[i] % 2 != 0)
	            oddCnt++;
	    }
        
        int evenCnt = n - oddCnt;
        
        if(oddCnt >= 1 && evenCnt >= n-1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
	    
	}

}