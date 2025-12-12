/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Sufficiently different string
URL: https://www.codechef.com/practice/course/icpc/ICPCTR28/problems/SDIFFSTR?tab=statement
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;

        int sz = s.length();
        vector<int> present(26, false);
        for (int i = 0; i < sz; i++)
        {
            present[s[i] - 'a'] = true;
        }

        string ansStr = "";
    
        int currentOverlap = 0;
        for (int i = 0; i < 26; i++)
        {
            if(ansStr.length() == sz)
            {
                break;
            }

            if(present[i] && currentOverlap < k)
            {
                ansStr += (char)('a' + i);
                currentOverlap++;
            }
            else if(!present[i]){
                ansStr += (char)('a'+i);
            }
        }

        if(ansStr.length() == sz) cout << ansStr << nl;
        else cout << "NOPE" << nl;
        
        
    }

    return 0;
}