/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: A - Biscuit Generator
URL: https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
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