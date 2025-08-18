/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Cricket Tournament
URL: https://www.codechef.com/problems/CRICKETUDYAM
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    if(m <= n-1) cout << "YES" << '\n';
	    else cout << "NO" <<  '\n';
	}
}
