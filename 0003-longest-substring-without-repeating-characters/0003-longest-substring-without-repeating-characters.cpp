class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int>m;
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            if(m.find(s[j])!=m.end())
            {
                m.erase(s[i]);
                i++;
            }
            else
            {
                ans=max(ans,j-i+1);
                m[s[j]]++;
                j++;
            }
        }
        return ans;
    }
};