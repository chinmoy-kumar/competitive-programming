/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Geekforgeeks
Problem: Disjoint set (Union-find)
Link: https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
Difficulty: Easy
=====================================================*/

/*Complete the functions below*/
int find(int par[], int x) {
    if(x == par[x])
        return x;
    int leader = find(par, par[x]);
    return leader;
}


void unionSet(int par[], int x, int z) {
    
    int leaderX = find(par, x);
    int leaderZ = find(par, z);
    
    par[leaderX] = par[leaderZ];
    
}