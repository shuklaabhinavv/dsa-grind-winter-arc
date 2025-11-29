class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int sum=0;
        for(int i:nums)
        {
            sum+=i;
        }
        int ans=sum-k*((int)(sum/k));
        return ans;
    }
};