class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(auto x:s)
        {
            if(isalnum(x))
            {
                t+=tolower(x);
            }
        }
        int n=t.length();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(t[i]!=t[j])
            return false;
            i++;j--;
        }
        return true;
    }
};