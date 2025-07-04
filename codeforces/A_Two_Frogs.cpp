/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Two Frogs
URL: https://codeforces.com/problemset/problem/2055/A
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the values of n, a, and b.
- Check if the parity (even/odd) of a and b is different or if n equals 2:
    - If true, output "NO".
- Otherwise, check specific edge cases:
    - If a is at the first position and b is at the second position, output "NO".
    - If a is at the last position and b is at the second-to-last position, output "NO".
- For all other cases, output "YES" since the frogs can meet.
*/

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
        int n, a, b;
        cin >> n >> a >> b;
        if (a % 2 != b % 2 || n == 2)
        {
            cout << "NO" << '\n';
        }
        else
        {
            if (a == 1 && b == 2)
            {
                cout << "NO" << endl;
            }
            else if (a == n && b == n - 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}