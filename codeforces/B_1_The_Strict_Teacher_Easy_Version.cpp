/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B1. The Strict Teacher (Easy Version)
URL: https://codeforces.com/contest/2005/problem/B1
=====================================================*/
/*
Approach:
- For each test case, read the number of cells, number of teachers (always 2), and a query number (not used).
- Read the positions of the two teachers and the position of the student (Devid).
- Sort the teacher positions to simplify logic.
- If both teachers are to the left of Devid, output the distance from the rightmost teacher to the last cell.
- If both teachers are to the right of Devid, output the distance from the leftmost teacher to the first cell.
- If Devid is between the two teachers, calculate the minimum number of moves required for Devid to escape, considering both sides and taking the optimal path.
- Output the result for each test case.
*/
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
        ll cellNum, teacherNum, queryNum;
        cin >> cellNum >> teacherNum >> queryNum;

        vector<ll> cellOfTeachers;
        ll a, b;
        cin >> a >> b;
        cellOfTeachers.push_back(a);
        cellOfTeachers.push_back(b);
        
        ll devidCell;
        cin >> devidCell;

        
        sort(cellOfTeachers.begin(), cellOfTeachers.end());

        if (cellOfTeachers[0] < devidCell && cellOfTeachers[1] < devidCell)
        {
            cout << abs(cellOfTeachers[1] - cellNum) << nl;
        }
        else if (cellOfTeachers[0] > devidCell && cellOfTeachers[1] > devidCell)
        {
            cout << abs(cellOfTeachers[0] - 1) << nl;
        }
        else
        {
            ll ok1 = abs(devidCell - cellOfTeachers[0]) - 1;
            ll ok2 = abs(devidCell - cellOfTeachers[1]) - 1;
            ll min1 = min(ok1, ok2);
            ll max1 = max(ok1, ok2);
            max1 = max1 - min1;
            ll ans = min1 + 1 + max1 / 2;
            cout << ans << nl;
        }
    }

    return 0;
}