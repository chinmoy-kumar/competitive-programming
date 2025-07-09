#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v;
        char prev = '1';

        for(char x : s)
        {
            if(x == '1')
                v.push_back(1);
            if(x == '0' && prev == '1')
                v.push_back(0);
            prev = x;
        }

        int oneCnt = 0, zeroCnt = 0;
        
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i] == 1)
                oneCnt++;
            else
                zeroCnt++;
        }

        if(oneCnt > zeroCnt)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
        
    }

    return 0;
}