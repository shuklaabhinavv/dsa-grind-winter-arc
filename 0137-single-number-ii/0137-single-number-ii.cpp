class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                count+=((nums[j]>>i)&1);
            }
            count%=3;
            ans=ans|count << i;
        }
        return ans;
    }
};