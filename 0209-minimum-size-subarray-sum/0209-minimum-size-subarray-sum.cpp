class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int i=0;
        int j=0;
        int currsum=0;
        int n=nums.size();
        int ans=INT_MAX;
        while(j<n)
        {
            currsum+=nums[j];
            while(currsum>=target)
            {
                ans=min(ans,j-i+1);
                currsum-=nums[i];
                i++;
            }
            j++;
        }
        return ans==INT_MAX ? 0 : ans;
    }
};
// if(currsum>=target)
            // {
            //     if(currsum==target)
            //     {
            //         ans=j-i+1;
            //         currsum-=nums[i];
            //         i++;
            //     }
            //     else
            //     {
            //         currsum-=nums[i];
            //         i++;
            //     }
            // }
            // else
            // {
            //     j++;
            //     if(j<n)
            //         currsum+=nums[j];
            // }