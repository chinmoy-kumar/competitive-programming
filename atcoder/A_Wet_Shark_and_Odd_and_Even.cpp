/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: A. Wet Shark and Odd and Even
URL: https://codeforces.com/problemset/problem/621/A
=====================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;
    long long int mn = LONG_LONG_MAX;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0)
        {
            count++;
            mn = min(mn, arr[i]);
        }
        sum += arr[i];
    }
    if(count % 2 != 0)
    {
        sum = sum - mn;
    }
    cout << sum;

    return 0;
}