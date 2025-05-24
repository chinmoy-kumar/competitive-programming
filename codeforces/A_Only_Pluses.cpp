/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Only Pluses
URL: https://codeforces.com/problemset/problem/1992/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a <= b && a <= c)
                a++;
            else if (b <= a && b <= c)
                b++;
            else if (c <= a && c <= b)
                c++;
        }
        cout << a * b * c << '\n';
    }

    return 0;
}