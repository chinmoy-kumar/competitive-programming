'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: M. Replace MinMax
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
====================================================='''
num = int(input())
lst = list(map(int, input().split()))

mxIdx = lst.index(max(lst))
mnIdx = lst.index(min(lst))

tmp = max(lst)
lst[mxIdx] = min(lst)
lst[mnIdx] = tmp

for n in lst:
    print(n, end = ' ')