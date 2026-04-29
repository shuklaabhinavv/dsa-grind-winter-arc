class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int>s;
        int ans=0;
        for(auto x:nums)
        {
            s.insert(x);
        }
        for(auto x:s)
        {
            if(s.find(x-1)==s.end())
            {
                int curr=1;
                int prev=x;
                while(s.find(prev+1)!=s.end())
                {
                    curr++;
                    prev++;
                }
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};