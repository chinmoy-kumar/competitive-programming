/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: A - Buttons
URL: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for(int i = 0; i < 2; i++)
    {
        if(a == b)
        {
            sum += a;
            a--;
        }
        else if(a > b)
        {
            sum += a;
            a--;
        }
        else
        {
            sum += b;
            b--;
        }
    }
    cout << sum;

    return 0;
}