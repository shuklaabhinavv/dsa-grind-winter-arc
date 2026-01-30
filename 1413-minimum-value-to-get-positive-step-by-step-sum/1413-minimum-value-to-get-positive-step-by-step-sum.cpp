class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int mini=0;
        int sum=0;
        for(int a=0;a<nums.size();a++)
        {
            sum=sum+nums[a];
            mini=min(mini,sum);
        }
        return 1-mini;
    }
};