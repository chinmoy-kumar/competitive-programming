/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Sereja and Suffixes
URL: https://codeforces.com/problemset/problem/368/B
=====================================================*/
/*
Approach:
- Read the size of the array `n` and the number of queries `m`.
- Store the array elements in a vector `a`.
- Use a set to keep track of unique elements encountered while iterating the array from the end.
- For each position `i` in the array, store the size of the set (number of unique elements from `i` to `n`) in a vector `cnt`.
- For each query, output the precomputed value from `cnt` corresponding to the given position.
- This approach efficiently handles the queries using precomputation and a set for uniqueness.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), cnt(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    for(int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for(int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << "\n";
    }

    return 0;
}