#include <bits/stdc++.h>
using namespace std;
int par[100005];
int grp_sz[100005];
int cmp, 

int find(int node)
{
    if(node == -1)
        return node;
    int leader = find(par[node]);
    return leader;
}

void dsu(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

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
    memset(par, -1, sizeof(par));
    memset(grp_sz, 1, sizeof(grp_sz));



    return 0;
}