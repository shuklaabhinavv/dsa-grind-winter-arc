class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int>m1(26,0);
        vector<int>m2(26,0);
        for(auto x:s)
        {
            m1[x-'a']++;
        }
        for(auto x:t)
        {
            m2[x-'a']++;
        }
        // for(int i=0;i<26;i++)
        // {
        //     if(m1)
        // }
        return m1==m2;
    }
};