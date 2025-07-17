#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 5, b = 14;
    // int ans = (a & b); // AND operation
    // int ans = (a | b); // OR operation
    int ans = (a ^ b); // XOR operation
    cout << ans << nl;

    return 0;
}