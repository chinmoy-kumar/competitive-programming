/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Strong Password
URL: https://codeforces.com/problemset/problem/1997/A
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case, read the input string.
- Traverse the string to check for consecutive duplicate characters.
- If a duplicate is found:
    - Insert a new character (next in ASCII order) after the duplicate.
    - Ensure the new character wraps around to 'b' if it exceeds 'z'.
    - Print the modified string and exit the loop.
- If no duplicates are found:
    - Append a new character (next in ASCII order) to the end of the string.
    - Ensure the new character wraps around to 'b' if it exceeds 'z'.
    - Print the modified string.
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
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                char ch = s[i] + 1;
                if (ch > 122)
                    ch = 98;
                s.insert(i + 1, 1, ch);
                cout << s << '\n';
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            int strSize = s.size();
            char ch = s[strSize - 1] + 1;
            if (ch > 122)
                ch = 98;
            s.push_back(ch);
            cout << s << '\n';
        }
    }

    return 0;
}