class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int curr=(min(height[i],height[j]))*(j-i);
            ans=max(curr,ans);
            if(height[j]>height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};