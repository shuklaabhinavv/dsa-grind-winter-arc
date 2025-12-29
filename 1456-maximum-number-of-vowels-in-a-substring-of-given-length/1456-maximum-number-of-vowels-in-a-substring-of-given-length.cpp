class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int i=0,j=0;
        int n=s.size();
        int c=0,ans=0;
        while(j<n)
        {
            if(j-i<k)
            {
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                {
                    c++;
                }
                j++;
            }
            else if(j-i==k)
            {
                ans=max(ans,c);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    c--;
                }
                i++;
            }
        }
        return ans;
    }
};