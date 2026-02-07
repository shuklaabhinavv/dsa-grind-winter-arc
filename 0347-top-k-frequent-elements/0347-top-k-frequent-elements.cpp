class Solution {
public:
    static bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int, int>>s;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            s.push_back({i->first, i->second});
        }
        sort(s.begin(),s.end(),sortByVal);
        vector<int> ans;
        for (int i=0;i<k;i++)
        {
            ans.push_back(s[i].first);
        }
        return ans;
    }
};