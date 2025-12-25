'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: O. Fibonacci
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
====================================================='''
n = int(input())

lst = [0] * 55
if n == 1:
    print(0)
elif n == 2:
    print(1)
else:
    lst[1] = 0
    lst[2] = 1
    for i in range(3, n+1):
        lst[i] = lst[i-1] + lst[i-2]
    print(lst[n])
