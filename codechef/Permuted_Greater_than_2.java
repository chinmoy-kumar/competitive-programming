#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x, y, z;
	    cin >> x >> y >> z;
	    
	    if(y == 0 && x <= z + 1)
	        cout << "Yes" << '\n';
	    else if( y > 0 && x <= z)
	        cout << "Yes" << '\n';
	    else
	        cout << "No" << '\n';
	}

}