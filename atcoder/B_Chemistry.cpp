/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Chemistry
URL: https://codeforces.com/problemset/problem/1883/B
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int oddCnt = 0;
        for (int x : freq)
        {
            if (x % 2 != 0)
                oddCnt++;
        }

        if (k < oddCnt - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}