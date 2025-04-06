/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Plus or Minus
URL: https://codeforces.com/problemset/problem/1807/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b;
        if(c == sum)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }

    return 0;
}