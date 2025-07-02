#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long int a, b, d;
	    cin >> a >> b;
        
        d = a + b;
        
	    if(a == 1 && b == 0)
	        cout << "Yes" << '\n';
	    else if(a == 0)
	        cout << "No" << '\n';
	    else if(d % a == 0)
	        cout << "Yes" << '\n';
	    else
	        cout << "No" << '\n';
	}

}