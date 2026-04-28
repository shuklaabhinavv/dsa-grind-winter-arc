class Solution {
public:
    bool isPalindrome(string s) 
    {
        string t;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(isalpha(c)||isdigit(c))
            {
                t+=tolower(c);
            }
        }
        int i=0;
        int j=t.size()-1;
        while(i<=j)
        {
            if(t[i]!=t[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};