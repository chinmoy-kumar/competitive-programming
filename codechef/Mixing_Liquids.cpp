/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Mixing Liquids
URL: https://www.codechef.com/problems/MIXINGLIQ?tab=statement
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int a, b;
	    cin >> a >> b;
	    
	    int x = min(a, b/2);
	    
	    cout << 3 * x << '\n';
	}

}
