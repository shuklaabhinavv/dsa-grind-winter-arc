class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int mindiff=INT_MAX;
        vector<vector<int>>ans;
        for(int i=1;i<arr.size();i++)
        {
            int a=arr[i]-arr[i-1];
            if(a<mindiff&&a>0)
            {
                ans.clear();   
                ans.push_back({arr[i-1], arr[i]});
                mindiff=a;
            }
            else if(a==mindiff)
            {
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};