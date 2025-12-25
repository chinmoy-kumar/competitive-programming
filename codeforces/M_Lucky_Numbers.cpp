/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: M. Lucky Numbers
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

bool isLucky(int x)
{
    string s = to_string(x);

    for (int i = 0; i < s.length(); i++)
    {
        int rem = x % 10;
        if(rem == 7 || rem == 4)
        {
            x = x/10;
        }
        else{
            return false;
        }
    }
    return true;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        if(isLucky(i) == true)  
        {
            flag = true;
            cout << i << " ";
        }
    }
    if(!flag) cout << -1 << nl;
    

    return 0;
}