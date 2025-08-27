/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Make same
URL: https://www.codechef.com/problems/P3_175
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
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;

        int zero[3] = {0, 0 , 0};
        int one[3] = {0, 0, 0};

        for (int i = 0; i < n; i++)
        {
            if(a[i] == '0') zero[0]++;
            else one[0]++;
            if(b[i] == '0') zero[1]++;
            else one[1]++;
            if(c[i] == '0') zero[2]++;
            else one[2]++;
        }

        int totalZero = zero[0] + zero[1] + zero[2];
        int totalOne = one[0] + one[1] + one[2];

        if(totalZero % n != 0 && totalOne % n != 0)
        {
            cout << -1 << nl;
            continue;
        }

        if(totalOne > totalZero)
        {
            cout << totalZero - max({zero[0], zero[1], zero[2]}) << nl;
        }
        else
        {
            cout << totalOne - max({one[0], one[1], one[2]}) << nl;
        }
        
    }

    return 0;
}