/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Geekforgeeks
Problem: Longest Subarray with Sum K
URL: https://shorturl.at/zjNQd
=====================================================*/
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        
        map<long long, int> mp;
        
        long long sum = 0;
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum == k)
            {
                ans = i + 1;
            }
            else if(mp.find(sum-k) != mp.end())
            {
              ans = max(ans, i-mp[sum-k]);
            }
            
            if(mp.find(sum) == mp.end())
            {
              mp[sum] = i;
            }
        }
        return ans;
    }
};

/*Alternative Solution:
========================
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        
        map<long long, int> mp;
        
        mp[0] = -1;
        
        long long sum = 0;
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(mp.find(sum-k) != mp.end())
            {
              ans = max(ans, i-mp[sum-k]);
            }
            if(mp.find(sum) == mp.end())
            {
              mp[sum] = i;
            }
        }
        return ans;
    }
};
*/