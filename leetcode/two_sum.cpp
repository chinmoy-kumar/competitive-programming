/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Leetcode
Problem: Two Sum
URL: https://leetcode.com/problems/two-sum/description/
=====================================================*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int sz = nums.size();
        for(int i = 0; i < sz; i++)
        {
            int diff = target - nums[i];
            if(mp.count(diff)) 
            {
                return{mp[diff], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};