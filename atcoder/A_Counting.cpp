/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder   
Problem: A - Counting 
URL: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    int count = 0;
    for(a; a <= b; a++)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}