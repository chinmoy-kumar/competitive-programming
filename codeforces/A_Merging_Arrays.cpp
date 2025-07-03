/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Merging Arrays
URL: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
=====================================================*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a;
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        ll x = b[i];
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (ll x : a)
        cout << x << " ";

    return 0;
}