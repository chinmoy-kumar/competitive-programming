'''=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Codeforces
Problem: I. Palindrome
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
====================================================='''
num = input();
numRev = num[::-1]
flag = True;
for n in num:
    if(numRev != num):
        flag = False;
        break;
int_num = int(numRev)
print(int_num)

if(flag == True):
    print("YES")
else:
    print("NO")