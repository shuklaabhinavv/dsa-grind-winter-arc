class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        unordered_map<char,int> m;
        for(auto s : s1)
        {
            m[s]++;
        }
        int k = s1.size();
        int n = s2.size();
        int count = m.size();
        int i = 0, j = 0;
        while(j < n)
        {
            if(m.find(s2[j]) != m.end())
            {
                m[s2[j]]--;
                if(m[s2[j]] == 0)
                    count--;
            }
            if(j - i + 1 < k)
            {
                j++;
            }
            else if(j - i + 1 == k)
            {
                if(count == 0)
                    return true;
                if(m.find(s2[i]) != m.end())
                {
                    if(m[s2[i]] == 0)
                        count++;
                    m[s2[i]]++;
                }
                i++;
                j++;
            }
        }
        return false;
    }
};