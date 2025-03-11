/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: leetcode
Problem: 70. climbing stairs
URL: https://leetcode.com/problems/climbing-stairs/
Difficulty: Easy
=====================================================*/
class Solution
{
public:
    int dp[50];
    int fibo(int n)
    {
        if (n <= 2)
            return n;
        if (dp[n] != -1)
            return dp[n];
        dp[n] = fibo(n - 1) + fibo(n - 2);
        return dp[n];
    }
    int climbStairs(int n)
    {
        memset(dp, -1, sizeof(dp));
        return fibo(n);
    }
};