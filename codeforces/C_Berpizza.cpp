/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: C. Berpizza
URL: https://codeforces.com/problemset/problem/1468/C
=====================================================*/
/*
Approach:
- Read the number of commands to process.
- Use a set to store customers in the order they arrive and a multiset to store customers by their money in descending order.
- For command 1:
    - Read the customer's money and add the customer to both the set and multiset.
- For command 2:
    - Retrieve the customer who arrived first (smallest customer number) from the set, add their number to the answer list, and remove them from both the set and multiset.
- For command 3:
    - Retrieve the customer with the highest money (and smallest customer number in case of ties) from the multiset, add their number to the answer list, and remove them from both the set and multiset.
- Finally, output the sequence of customer numbers processed.
This approach uses sets and multisets for efficient insertion, deletion, and retrieval operations.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customerNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    while (n--)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            int money;
            cin >> money;
            s.insert({customerNo, money});
            ml.insert({money, -customerNo});
            customerNo++;
        }
        else if (command == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            s.erase({pos, money});
            ml.erase(--ml.end());
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << '\n';

    return 0;
}