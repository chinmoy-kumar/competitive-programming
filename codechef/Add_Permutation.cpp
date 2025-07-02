#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;


        vector < int > v(n + 1);

        for (int i = 1; i <= n; i++) {
            v[i] = i;
        }
        reverse(v.begin() + 1, v.begin() + (n - k + 2));

        for (int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
}