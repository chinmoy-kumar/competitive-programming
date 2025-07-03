/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Tom Riddle's Diary
URL: https://codeforces.com/problemset/problem/855/A
=====================================================*/

/*
Approach:
- Read the number of usernames to process.
- Use a set to track the usernames that have already been encountered.
- For each username, check if it exists in the set:
    - If it exists, output "YES".
    - If it does not exist, output "NO" and add it to the set.
- This approach ensures efficient lookups and insertions using the set data structure.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<string> record;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (record.find(s) != record.end())
            cout << "YES" << '\n';
        else
        {
            cout << "NO" << '\n';
            record.insert(s);
        }
    }

    return 0;
}