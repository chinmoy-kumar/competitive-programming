/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: AtCoder
Problem: F - Not Found
URL: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool flag = true;
    sort(s.begin(), s.end());
    int freq[26] = {0};
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 1)
        {
            cout << char(i + 'a');
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "None";

    return 0;
}