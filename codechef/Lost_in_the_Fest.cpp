/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codechef
Problem: Lost in the Fest!!
URL: https://www.codechef.com/problems/MDGT
=====================================================*/
/*
Approach:
- Read the number of test cases.
- For each test case:
    - Read the number of elements in the array.
    - Store the elements in a vector.
    - Identify the height of Bhoomi (last element of the array).
    - Traverse the array to find the first index where the element is greater than or equal to Bhoomi's height.
    - Calculate the number of people or seconds after which Bhoomi can see the performance by subtracting this index from the total number of elements and minus one for using zero based index.
    - Output the result for each test case.

This is a simple implementation problem involving arrays and basic traversal.
*/
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int bhoomiHeight = v[n-1];
        int idx = -1;
        for (int i = 0; i <= n; i++)
        {
            if(v[i] >= bhoomiHeight)
            {
                idx = i;
                break;
            }
        }

        cout << n - 1 - idx << nl;
        
        
    }
    

    return 0;
}