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
        int n, k;
        cin >> n >> k;
        ll x;
        cin >> >> x;
        
        ll smSum = 0, lgSum = 0;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++)
        // {
        //     v[i] = i+1;
        // }
        
        // for (int i = 0; i < k; i++)
        // {
        //     smSum += v[i];
        // }
        // cout << smSum << nl;

        smSum = k*(k+1)/2;
        lgSum = k*(2*n-k+1)/2;

        // int cnt = 1;
        // for (int i = n-1; i >= 0 ; i--)
        // {
        //     // cout << v[i] << " ";
        //     lgSum += v[i];
        //     // cout << "sum: " << lgSum << " " << "cnt: " << cnt << " ";
        //     cnt++;
        //     if(cnt > k) break;
        // }

        // cout << lgSum << nl;
        
        if(smSum <= x && lgSum >= x) cout << "YES" << nl;
        else cout << "NO" << nl;

    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--)
//     {
//         ll n, k, x;
//         cin >> n >> k >> x;

//         ll smSum = k * (k + 1) / 2;
//         ll lgSum = k * (2*n - k + 1) / 2;

//         if(smSum <= x && lgSum >= x)
//             cout << "YES" << nl;
//         else
//             cout << "NO" << nl;
//     }

//     return 0;
// }
