/*=====================================================
Author: Chinmoy Kumar Tirtho
Patform: CSES
Problem: Labyrinth
Link: https://cses.fi/problemset/result/12161163/
=====================================================*/

#include <bits/stdc++.h>
using namespace std;
 
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;
 
vector<pair<int, int>> moveDir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
 
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
 
void bfs(int si, int sj)
{
    vis[si][sj] = true;
    level[si][sj] = 0;
    parent[si][sj] = {-1, -1};
 
    queue<pair<int, int>> q;
    q.push({si, sj});
 
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
 
        int par_i = par.first;
        int par_j = par.second;
 
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + moveDir[i].first;
            int cj = par_j + moveDir[i].second;
 
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == 'A' || grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}
 
int main()
{
    cin >> n >> m;
 
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
 
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
 
    memset(vis, false, sizeof(vis));
    memset(level, 0, sizeof(level));
 
    bfs(si, sj);
 
    if (vis[di][dj])
    {
        cout << "YES" << endl;
        cout << level[di][dj] << endl;
 
        int c_i = di;
        int c_j = dj;
 
        vector<char> path;
 
        while (1)
        {
            if (grid[c_i][c_j] == 'A')
                break;
 
            pair<int, int> par = parent[c_i][c_j];
            int p_i = par.first;
            int p_j = par.second;
 
            if (p_i - c_i == 1 && p_j - c_j == 0)
                path.push_back('U');
            if (p_i - c_i == -1 && p_j - c_j == 0)
                path.push_back('D');
            if (p_i - c_i == 0 && p_j - c_j == -1)
                path.push_back('R');
            if (p_i - c_i == 0 && p_j - c_j == 1)
                path.push_back('L');
 
            c_i = p_i;
            c_j = p_j;
        }
 
        reverse(path.begin(), path.end());
 
        for(auto it : path){
            cout << it;
        }
        cout << endl;
    }
    else
    cout << "NO" << endl;

return 0;
}
