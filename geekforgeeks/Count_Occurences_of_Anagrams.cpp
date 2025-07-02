/*=====================================================
Author: Chinmoy Kumar Tirtho
Platform: Geeksforgeeks
Problem: Count Occurences of Anagrams
URL: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?
=====================================================*/
// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        int patFreq[26] = {0};
        int k = pat.length();
        
        for(int i = 0; i < k; i++)
        {
            int index = pat[i]-'a';
            patFreq[index]++;
        }
        
        int txtFreq[26]={0};
        int n = txt.length();

        int l = 0, r = 0, cnt = 0;
        while(r < n)
        {
            txtFreq[txt[r]-'a']++;
            
            if(r-l+1 < k)
            {
                r++;
            }
            else if(r-l+1 == k)
            {
                if(memcmp(patFreq, txtFreq, sizeof(patFreq)) == 0)
                {
                    cnt++;
                    
                }   
                txtFreq[txt[l]-'a']--;
                l++, r++;
            }
        }
        
        return cnt;
        
    }
};