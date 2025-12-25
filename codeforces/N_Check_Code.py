'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: N. Check Code
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
====================================================='''
a, b =  map(int, input().split())
c = input()
idx = 0
for i in c:
    if(i == '-'):
        idx = c.index(i)
if(a + 1 == idx+1 and c.count('-') == 1): print("Yes")
else: print("No")
