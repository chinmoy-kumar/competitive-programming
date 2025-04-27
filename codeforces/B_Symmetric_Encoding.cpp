/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Symmetric Encoding
URL: https://codeforces.com/contest/1974/problem/B
=====================================================*/

/*
Approach:
- Read the number of test cases.
- For each test case, read the length of the string and the string itself.
- Extract all unique characters from the string and store them in a set.
- Convert the set into a vector to allow indexed access.
- Create a mapping between characters such that the first character maps to the last, the second to the second last, and so on.
- For each character in the input string, replace it with its mapped counterpart using the created mapping.
- Output the transformed string for each test case.

This approach uses sets for uniqueness and maps for efficient character transformation.
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> charSet;
        for (int i = 0; i < n; i++)
            charSet.insert(s[i]);

        map<char, char> tracker;
        vector<char> charVector(charSet.begin(), charSet.end());

        for (int i = 0; i < charVector.size(); i++)
        {
            tracker[charVector[i]] = charVector[charVector.size() - (i + 1)];
            tracker[charVector[charVector.size() - (i + 1)]] = charVector[i];
        }

        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char x = tracker[s[i]];
            v.push_back(x);
        }

        for (auto c : v)
            cout << c;

        cout << '\n';
    }

    return 0;
}