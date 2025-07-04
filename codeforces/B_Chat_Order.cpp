/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Chat Order
URL: https://codeforces.com/contest/637/problem/B
=====================================================*/

/*
Approach:
- Read the number of usernames to process.
- Use a map to store the usernames with their respective indices.
- Use a set to track already printed usernames to avoid duplicates.
- Iterate through the usernames in reverse order of their input.
- For each username, check if it has already been printed using the set.
- If not, print the username and add it to the set.
- This ensures that usernames are printed in reverse order of their last occurrence without duplicates.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, string> mp;
    set<string> tracker;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        mp[i] = s;
    }

    for (int i = mp.size() - 1; i >= 0; i--)
    {
        string s1 = mp[i];
        if (tracker.find(s1) == tracker.end())
        {
            cout << s1 << endl;
            tracker.insert(s1);
        }
    }

    return 0;
}