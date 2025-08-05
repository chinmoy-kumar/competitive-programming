/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Append Average
URL: https://www.codechef.com/problems/AVGAPP
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
	    long long k;
	    cin >> k;
	    vector<long long> v(n);
	    long long sum = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> v[i];
	        sum += v[i];
	    }
	    
	    sort(v.begin(), v.end());
	    
	    long long mn1 = v[0], mn2 = v[1];
	    
	    while(k)
	    {
	        long long avg = (mn1 + mn2 + 1)/2;
	        if(avg < mn2)
	        {
	            mn2 = avg;
	            sum += avg;
	        }
	        else
	        {
	            sum += avg * k;
	            break;
	        }
	        k--;
	    }
	    
	    cout << sum << '\n';
	}

}
