/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Pending Assignments
URL: https://www.codechef.com/problems/ASSIGNMNT
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        long long int needTime = x * y;

        long long int hasTime = z * 24 * 60;

        if(needTime <= hasTime)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}