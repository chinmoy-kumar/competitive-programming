/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Sereja and Dima
URL: https://codeforces.com/contest/381/problem/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int player1 = 0, player2 = 0;
    int tracker = 1;
    while (n != 0)
    {
        int first = v.front();
        int last = v.back();
        
        if (first > last)
        {
            if (tracker % 2 != 0)
            {
                player1 += first;
                v.erase(v.begin()); 
            }
            else
            {
                player2 += first;
                v.erase(v.begin());
            }

        }
        else
        {
            if (tracker % 2 != 0)
            {
                player1 += last;
                v.pop_back();
            }
            else
            {
                player2 += last;
                v.pop_back();
            }
        }
        n--;
        tracker++;
    }
    cout << player1 << " " << player2;
    return 0;
}