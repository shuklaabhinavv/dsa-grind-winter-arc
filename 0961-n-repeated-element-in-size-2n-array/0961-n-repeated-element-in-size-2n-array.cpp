class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        int n=nums.size();
        for(auto i:nums)
        {
            m[i]++;
        }
        int ans=-1;
        for(auto x:m)
        {
            if(x.second==n/2)
            {
                ans=x.first;
            }
        }
        return ans;
    }
};