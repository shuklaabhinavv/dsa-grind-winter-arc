class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        int i=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
                int total=nums[i]+nums[j]+nums[k];
                if(abs(target-total)<abs(target-result))
                {
                    result=total;
                }
                if (total==target) return target;
                else if (total<target) j++;
                else k--;
            }
        }
        return result;
    }
};