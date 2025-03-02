/*=====================================================
Author: Chinmoy Kumar Tirtho
Problem: Y. The last 2 digits
Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
Difficulty: Easy
=====================================================*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d, m;
	cin >> a >> b >> c >> d;
	
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    m = (a * b * c *d) % 100;
    
    if(m < 10)
        cout << 0 << m;
    else
        cout << m;

}