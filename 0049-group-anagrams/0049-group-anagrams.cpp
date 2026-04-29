class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>m;
        for(auto x:strs)
        {
            string t=x;
            sort(t.begin(),t.end());
            m[t].push_back(x);
        }
        vector<vector<string>>res;
        for(auto x:m)
        {
            res.push_back(x.second);
        }
        return res;
    }
};