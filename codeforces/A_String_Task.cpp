/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. String Task
URL: https://codeforces.com/problemset/problem/118/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<char> sv;

    int sz = s.size();
    for(int i = 0; i <= sz; i++)
    {
        if(s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && i != sz)
        {
            sv.push_back('.');
            sv.push_back(s[i]);
        }
    }
    transform(sv.begin(), sv.end(), sv.begin(), ::tolower);
    for(auto x : sv) cout << x;


    return 0;
}