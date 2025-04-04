/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder   
Problem: A - Counting 
URL: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
=====================================================*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, t;
    cin >> a >> b >> t;

    float timeLimit = t + 0.5;
    int n = (timeLimit / a);
    int totalBiscut = n * b;
    cout << totalBiscut << endl;

    return 0;
}