/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Leetcode
Problem: 560. Subarray Sum Equals K
URL: https://leetcode.com/problems/subarray-sum-equals-k/description/
=====================================================*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCnt{{0,1}};
        long prefixSum = 0;
        long res = 0;
        for(int x : nums)
        {
            prefixSum += x;

            res += prefixCnt[prefixSum - k];
            prefixCnt[prefixSum]++;
        }
        return res;

    }
};