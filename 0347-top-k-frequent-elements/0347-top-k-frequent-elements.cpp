class Solution {
public:
    static bool mysort(const pair<int,int>&a,const pair<int,int>&b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        for(auto x:nums)
        {
            m[x]++;
        }
        vector<pair<int,int>>p;
        for(auto x:m)
        {
            p.push_back({x.first,x.second});
        }
        sort(p.begin(),p.end(),mysort);
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(p[i].first);
        }
        return res;
    }
};