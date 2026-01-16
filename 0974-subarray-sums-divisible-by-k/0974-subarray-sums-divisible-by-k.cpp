class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<int>p(n+1,0);
        for(int i=1;i<=n;i++)
        {
            p[i]=((p[i-1]+nums[i-1])%k+k)%k;
        }
        int c=0;
        vector<int>f(k,0);
        for(auto i:p)
        {
            f[i]++;
        }
        for(auto i:f)
        {
            c+=(i*(i-1))/2;
        }
        return c;
    }
};