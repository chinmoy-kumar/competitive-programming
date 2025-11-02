/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Atcoder
Problem: D - LR insertion
URL: https://atcoder.jp/contests/abc237/tasks/abc237_d?lang=en
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s; cin >> s;
    int sz = s.size();
    
    vector<int> ans;
    stack<int> st;
    
    if(s[0] == 'L')
        st.push(0);
    else   
        ans.push_back(0);
    
    for (int i = 0; i < n; i++)
    {
        if(i == n-1 || s[i+1] == 'R')
        {
            ans.push_back(i+1);
        }
        else
        {
            st.push(i+1);
        }
    }

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    
    for(int x : ans)
        cout << x << " ";

    return 0;
}