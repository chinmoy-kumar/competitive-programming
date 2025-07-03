/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: A - Four Digits
URL: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;

    int sz = n.size();
    if(sz < 4)
    {
        int gap = 4 - sz;
        for(int i = 0; i < gap; i++)
        {
            cout << 0;
        }
        cout << n;
    }
    else
    {
        cout << n;
    }

    return 0;
}