/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Line
URL: https://codeforces.com/contest/1722/problem/D
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the length of the string and the string itself.
    - Initialize a result variable to store the sum of initial values.
    - Create a vector to store the differences between optimal and current values for each position.
    - Iterate through the string:
        - Calculate the current values based on the character ('R' or 'L') and its position.
        - Add the current values to the result.
        - Calculate the optimal values for the position and find the difference.
        - Store the difference in the vector.
    - Sort the vector in descending order to maximize the gain in values.
    - Iterate through the sorted vector:
        - Add the differences to the result one by one and print the cumulative result.
    - Print a newline after processing each test case.
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
        long long int result = 0;
        vector<long long> v;


        for (long long int i = 0; i < n; i++)
        {
            long long int current = 0;
            if (s[i] == 'R')
            {
                current = n - (i + 1);
            }
            else
            {
                current = i;
            }
            result += current;

            long long int optimal = 0;
            if (i < n / 2)
            {
                optimal = n - (i + 1);
            }
            else
            {
                optimal = i;
            }
            long long int diff = optimal - current;
            v.push_back(diff);
        }

        sort(v.begin(), v.end(), greater<>());

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
            result += v[i];
            // cout << result << " ";
        }
        cout << '\n';
    }

    return 0;
}