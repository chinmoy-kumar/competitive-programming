/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Small GCD Sort
URL: https://www.codechef.com/problems/P3209?tab=statement
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
	     map<int, vector<int>> gcd_res;
	     for (int i = 1; i <= n; i++) {
	         int x = gcd(i, n);
	         gcd_res[x].push_back(i);
	     }
	     
	     for(auto it = gcd_res.rbegin(); it != gcd_res.rend(); it++)
	     {
	         for(int x : it -> second)
	            cout << x << " ";
	     }
        cout << endl;	     
	    
	}

}
