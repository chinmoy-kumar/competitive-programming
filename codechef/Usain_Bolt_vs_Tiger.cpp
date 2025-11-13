/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Usain Bolt vs Tiger
URL: https://www.codechef.com/practice/course/icpc/ICPCTR28/problems/USANBOLT
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    double finish, dist, tigerAc, boltSp;
	    cin >> finish >> dist >> tigerAc >> boltSp;
	    double boltTime = finish/boltSp;
	    double temp = 2*(finish+dist)/tigerAc;
	    double tigerTime = sqrt(temp);
	    
	    if(boltTime < tigerTime) cout << "Bolt" << '\n';
	    else cout << "Tiger" << '\n';
	    
	}

}
