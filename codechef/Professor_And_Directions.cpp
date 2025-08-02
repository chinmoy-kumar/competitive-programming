/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Professor And Directions
URL: https://www.codechef.com/problems/DIRECTN
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L' && s[i + 1] == 'L')
            {
                flag = true;
                break;
            }
            if (s[i] == 'R' && s[i + 1] == 'R')
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

}