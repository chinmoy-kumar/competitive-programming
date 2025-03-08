/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: D. Roads not only in Berland
Link: https://codeforces.com/problemset/problem/25/D
Difficulty: Hard
=====================================================*/

#include <bits/stdc++.h>
using namespace std;
int par[1005];
int grp_sz[1005];

int find(int node)
{
    if(par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
    
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(leader1 == leader2) 
        return;

    if(grp_sz[leader1] >= grp_sz[leader2])
    {
        par[leader2] = leader1;
        grp_sz[leader1] += grp_sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        grp_sz[leader2] += grp_sz[leader1]; 
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_sz[i] = 1;         
    }

    vector<pair<int, int>> rmv;
    vector<pair<int, int>> create;
    for(int i = 1; i < n; i++)
    { 
        int a, b;
        cin >> a >> b; 
        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB)
            rmv.push_back({a, b});
        else
            dsu_union(a, b);
    }

    for(int i = 2; i <= n; i++)
    {
        int leader1 = find(1);
        int leader2 = find(i);
        if(leader1 != leader2)
        {   
            create.push_back({1, i});
            dsu_union(1, i);
        }

    }

    cout << rmv.size() << endl;

    for(int i = 0; i < rmv.size(); i++)
    {
        cout << rmv[i].first << " " << rmv[i].second << " " << create[i].first << " " << create[i].second;
        cout << endl;
    }

    return 0;
}