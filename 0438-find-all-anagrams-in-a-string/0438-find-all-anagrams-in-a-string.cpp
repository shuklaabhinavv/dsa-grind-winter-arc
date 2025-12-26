class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int k = p.size();
        int n = s.size();
        unordered_map<char,int> m1;
        for(char ch : p)
            m1[ch]++;
        int c = m1.size();
        int i = 0, j = 0;
        vector<int> ans;
        while(j < n)
        {
            m1[s[j]]--;
            if(m1[s[j]] == 0)
                c--;
            if(j - i + 1 == k)
            {
                if(c == 0)
                    ans.push_back(i);
                m1[s[i]]++;
                if(m1[s[i]] == 1)
                    c++;
                i++;
            }
            j++;
        }
        return ans;
    }
};
