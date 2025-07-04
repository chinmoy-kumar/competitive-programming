#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int res = v[0];

        for (int i = 1; i < n; i++) {
            int a = i;
            int b = max(a, v[i]+1);
            
            res = min(res, b);
        }
        
        
        cout << res << '\n';
    }

}