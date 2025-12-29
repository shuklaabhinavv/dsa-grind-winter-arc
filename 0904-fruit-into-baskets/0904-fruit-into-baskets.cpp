class Solution {
public:
    int totalFruit(vector<int>&s) 
    {
        int n = s.size();
        if(n==1)
        {
            return 1;
        }
        int ans = 1;
        int i = 0, j = 0,k = 2;
        unordered_map<int, int> m;
        while (j < n)
        {
            m[s[j]]++;
            if (m.size() < k)
            {
                j++;
            }
            else if (m.size() == k)
            {
                ans = max(ans, j - i + 1);
                j++;
            }
            else
            {
                while (m.size() > k)
                {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                        m.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};
