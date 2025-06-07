/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B2. The Strict Teacher (Hard Version)
URL: https://codeforces.com/problemset/problem/2005/B2
=====================================================*/
/*
Approach:
- For each test case, read the number of cells, teachers, and queries.
- Read the positions of teachers and sort them for efficient searching.
- For each query (Devid's cell):
    - If all teachers are to the left or right of Devid, calculate the maximum possible distance to the nearest wall.
    - Otherwise, use binary search (lower_bound) to find the closest teachers on both sides of Devid.
    - Calculate the minimum distance Devid can move without being caught, based on the nearest teachers.
- Output the answer for each query.
This approach uses sorting and binary search for efficient nearest neighbor queries.
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
        for (int i = 0; i < teacherNum; i++)
        {
            ll x;
            cin >> x;
            cellOfTeachers.push_back(x);
        }

        sort(cellOfTeachers.begin(), cellOfTeachers.end());

        for (int i = 0; i < queryNum; i++)
        {
            ll devidCell;
            cin >> devidCell;

            if (cellOfTeachers[0] < devidCell && cellOfTeachers[teacherNum - 1] < devidCell)
            {
                cout << abs(cellOfTeachers[teacherNum - 1] - cellNum) << nl;
            }
            else if (cellOfTeachers[0] > devidCell && cellOfTeachers[teacherNum - 1] > devidCell)
            {
                cout << abs(cellOfTeachers[0] - 1) << nl;
            }
            else
            {
                ll lo = lower_bound(cellOfTeachers.begin(), cellOfTeachers.end(), devidCell) - cellOfTeachers.begin();
                ll ok1 = abs(devidCell - cellOfTeachers[lo - 1]) - 1;
                ll ok2 = abs(devidCell - cellOfTeachers[lo]) - 1;
                ll min1 = min(ok1, ok2);
                ll max1 = max(ok1, ok2);
                max1 -= min1;
                ll ans = min1 + 1 + max1 / 2;
                cout << ans << nl;
            }
        }
    }

    return 0;
}
