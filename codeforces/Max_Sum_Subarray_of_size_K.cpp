/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Geeksforgeeks
Problem: Max Sum Subarray of size K
URL: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
=====================================================*/
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size(), l = 0, r = 0;
        long long ans = 0, sum = 0;
        while(r < n)
        {
            sum += arr[r];
            if(r-l+1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++, r++;
            }
            else
                r++;
        }
        return ans;
    }
};