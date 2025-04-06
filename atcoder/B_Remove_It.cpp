/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: H - Remove It
URL: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    long long int x;
    cin >> x;

    vector<long long int> v(a);

    for(int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;

        if(temp == x)
        {
            continue;
        }
        else
        {
            v[i] = temp;
        }
    }
    int sz = v.size();

    for (int i = 0; i < sz; i++)
    {
        if(v[i] == 0)
            continue;
        cout << v[i] << " ";
    }
    

    return 0;
}