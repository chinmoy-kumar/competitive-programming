#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        int oneCnt = 0, twoCnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            if (v[i] == 1)
                oneCnt++;
            if (v[i] == 2)
                twoCnt++;
        }

        int res = 0;
        
        if(oneCnt % 2 == 1)
        {
            res = twoCnt;
        }
        else
        {
            res = min(twoCnt, oneCnt/2);
        }

        cout << res << '\n';
    }

}