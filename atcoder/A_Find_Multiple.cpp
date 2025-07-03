/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: A - Find Multiple
URL: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = true;
    for(a; a <=b; a++)
    {
        if(a % c == 0)
        {
            cout << a;
            flag = false;
            break;
        }
    }
    if(flag)
        cout << -1;

    return 0;
}