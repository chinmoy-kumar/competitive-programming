/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Divisible Duel
URL: https://www.codechef.com/problems/P2209?tab=statement
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;
	    cin >> x >> y;
	    
	    int evenSum = 0, oddSum = 0;
	    vector<int> v;
	    for (int i = x; i <= y; i++) {
            if(i % x == 0) v.push_back(i);
	    }
	    
	    int sz = v.size();
	    for (int i = 0; i < sz; i++) {
	        if(v[i] % 2 == 0) evenSum += v[i];
	        else oddSum += v[i];
	    }
	    
	    if(evenSum >= oddSum) cout << "YES" << '\n';
	    else cout << "NO" << '\n';
	}

}
