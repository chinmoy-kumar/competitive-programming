/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Binary Love
URL: https://www.codechef.com/problems/P5209?tab=statement
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
        string s;
        cin >> s;
        
        
        int flag = 0;
        while(!s.empty())
        {
            int zeroOne = 0, oneZero = 0;
            for (int i = 1; i < n; i++) {
                if(s[i-1] == '0' && s[i] == '1') zeroOne++;
                if(s[i-1] == '1' && s[i] == '0') oneZero++;
            }
            
            if(zeroOne > 0 && zeroOne == oneZero)
            {
                flag = 1;
                cout << "Alice" << endl;
                break;
            }
            else
            {
                s.pop_back();
                flag = 0;
            }
        }
        
        if(flag == 0)
        {
            cout << "Bob" << endl;
        }
	}

}
