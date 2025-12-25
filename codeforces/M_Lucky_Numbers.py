'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: M. Lucky Numbers
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
====================================================='''
def isLucky(a):
    num = str(a)
    length = len(num)
    for  i in range(0, length):
        rem = a % 10
        if(rem == 4 or rem == 7):
            a = a//10
        else:
            return False
    return True

a, b = (input().split())

aa = int(a)
bb = int(b)

flag = 0
for n in range(aa, bb+1):
    if(isLucky(n)):
        flag = 1
        print(n, end = " ")
if(flag == 0):
    print(-1)



