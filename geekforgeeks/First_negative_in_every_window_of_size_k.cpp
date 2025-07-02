class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int l = 0, r = 0;
        int n = arr.size();
        vector<int> ans;
        queue<int> q;
        while(r < n)
        {
            if(arr[r] < 0)
            {
                q.push(arr[r]);
            }
            
            if(r-l+1 == k)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front());
                    if(arr[l] == q.front())
                        q.pop();
                }
                else
                    ans.push_back(0);
                    
                l++, r++;
                
            }
            else
                r++;
        }
        return ans;
    }
};