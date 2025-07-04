/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: B - How many? 
URL: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int s, t;
    cin >> s >> t;
    int count = 0;
    for(int i = 0; i <= s; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                int sum = i + j + k;
                int m = i * j * k;
                if(sum <= s && m <= t)
                {
                    count++;
                }
            }
            
        }
    }
    cout << count << endl;

    return 0;
}