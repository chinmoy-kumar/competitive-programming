/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. YetnotherrokenKeoard
URL: https://codeforces.com/problemset/problem/1907/B
=====================================================*/
#include <bits/stdc++.h>
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
        vector<pair<int, char>> upperCase;
        vector<pair<int, char>> lowerCase;
        
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'b')
            {
                if(!lowerCase.empty())
                    lowerCase.pop_back();
            }
            
            else if(s[i] == 'B')
            {
                if(!upperCase.empty())
                    upperCase.pop_back();
            }

            else if(islower(s[i]))
                lowerCase.push_back({i, s[i]});
            else if(isupper(s[i]))
                upperCase.push_back({i, s[i]});
        }

        upperCase.insert(upperCase.end(), lowerCase.begin(), lowerCase.end());

        sort(upperCase.begin(), upperCase.end());
        for(auto x : upperCase)
        {
            cout << x.second;
        }
        cout << endl;
        
    }   

    return 0;
}