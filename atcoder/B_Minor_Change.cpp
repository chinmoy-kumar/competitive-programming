/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: B - Minor Change 
URL: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;

    int count = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        if(s[i] != t[i])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}