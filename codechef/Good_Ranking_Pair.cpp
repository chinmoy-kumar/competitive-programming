/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Good Ranking (Pair)
URL: https://www.codechef.com/problems/GOODRANK2
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << 2 << '\n';
	for (int i = 1; i <= n; i++) {
	    cout << i << " ";
	}
	cout << '\n';
	for (int i = n; i >= 1; i--) {
	    cout << i << " ";
	}

}
