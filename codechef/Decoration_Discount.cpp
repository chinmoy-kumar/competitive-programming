/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: codechef
Problem: Decoration Discount
URL: https://www.codechef.com/problems/DECDISC
=====================================================*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int min_cost = INT_MAX;

        // Check adjacent pairs with discount
        for (int i = 0; i < N - 1; i++) {
            int cost = A[i] + (A[i + 1] / 2);
            min_cost = min(min_cost, cost);
        }

        // Check all other combinations without discount
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j || j == i + 1) continue;
                int cost = A[i] + A[j];
                min_cost = min(min_cost, cost);
            }
        }

        cout << min_cost << endl;
    }

    return 0;
}
