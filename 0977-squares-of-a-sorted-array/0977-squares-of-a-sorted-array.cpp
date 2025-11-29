class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        map<int,int>m;
        for(auto i:nums)
        {
            m[abs(i)]++;
        }
        int i=0;
        for(auto x:m)
        {
            while(x.second>0)
            {
                int a=x.first;
                nums[i]=a*a;
                i++;
                x.second--;
            }
        }
        return nums;
    }
};