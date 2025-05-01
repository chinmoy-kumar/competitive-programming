/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B - Skibidus and Amog'u
URL: https://codeforces.com/contest/2065/problem/A
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the input string.
- Extract all characters from the string except the last two.
- Append the character 'i' to the extracted characters.
- Print the modified string for each test case.

This is a basic string manipulation problem.
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
        string s;
        cin >> s;
        int sz = s.length();
        vector<char> s2;
        set<string> s3;
        for (int i = 0; i < sz - 2; i++)
        {
            s2.push_back(s[i]);
        }
        s2.push_back('i');
        for (auto x : s2)
            cout << x;
        cout << '\n';
    }

    return 0;
}