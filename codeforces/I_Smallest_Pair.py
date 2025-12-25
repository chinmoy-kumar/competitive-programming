'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: I. Smallest Pair
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
====================================================='''
tc = int(input())
for t in range(0, tc):
    n = int(input())
    lst = list(map(int, input().split()))
    res = []*n
    for i in range(0, n-1):
        for j in range(i+1, n):
            value = lst[i] + lst[j] + j - i
            res.append(value)
    print(min(res))