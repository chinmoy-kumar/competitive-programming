/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: B. Radio Station
URL: https://codeforces.com/problemset/problem/918/B
=====================================================*/

/*
Approach:
- Read the number of server entries (n) and command entries (m).
- Use a map to store server IPs as keys and their corresponding server names as values.
- For each server entry, read the server name and IP, and store them in the map.
- For each command entry, read the command name and IP (removing the trailing semicolon).
- Use the IP to find the corresponding server name from the map.
- Output the command name, IP (with semicolon), and the server name as a comment.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> servers;
    map<string, string> commands;

    while (n--)
    {
        string serverName, ip;
        cin >> serverName >> ip;
        servers[ip] = serverName;
    }

    while (m--)
    {
        string commandName, ip;
        cin >> commandName >> ip;
        ip.pop_back();
        commands[ip] = commandName;

        string serverName = servers[ip];
        cout << commandName << " " << ip << ";" << " " << "#" << serverName;
        cout << '\n';
    }

    return 0;
}