/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Colourblindness
URL: https://codeforces.com/problemset/problem/1722/B
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B'))
                flag = false;   
            if(s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B'))
                flag = false; 
        }
        

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}