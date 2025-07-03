/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Registration system
URL: https://codeforces.com/problemset/problem/4/C
=====================================================*/

/*
Approach:
- Read the number of usernames to process.
- Use a map to track the count of each username.
- If a username is new, output "OK" and add it to the map.
- If a username already exists, append a number to make it unique and update the map.

This is a basic implementation problem using maps for efficient lookups.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end())
        {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}

