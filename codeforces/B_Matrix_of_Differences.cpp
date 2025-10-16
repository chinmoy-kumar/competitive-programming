/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codeforces
Problem: B. Matrix of Differences
URL: https://codeforces.com/problemset/problem/1783/B
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
void solve(int t)
{
}
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
        int arr[n][n];

        int cnt = 0;
        int small = 1, large = n * n;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (cnt % 2 == 0)
                    {
                        arr[i][j] = small;
                        small++;
                    }
                    else
                    {
                        arr[i][j] = large;
                        large--;
                    }
                    cnt++;
                }
            }
            else
            {
                for (int j = n-1; j >= 0; j--)
                {
                    if (cnt % 2 == 0)
                    {
                        arr[i][j] = small;
                        small++;
                    }
                    else
                    {
                        arr[i][j] = large;
                        large--;
                    }
                    cnt++;
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << nl;
        }
        
    }

    return 0;
}