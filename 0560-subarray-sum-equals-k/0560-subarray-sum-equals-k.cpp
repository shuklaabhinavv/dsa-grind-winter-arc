class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(sum==k)
            {
                c++;
            }
            if(m.find(sum-k)!=m.end())
            {
                c=c+m[sum-k];
            }
            m[sum]++;
        }
        return c;
    }
};