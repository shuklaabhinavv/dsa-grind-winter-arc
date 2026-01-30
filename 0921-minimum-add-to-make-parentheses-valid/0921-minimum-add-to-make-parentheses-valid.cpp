class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int n=s.length();
        if(n==0) return n;
        int c=0;
        stack<char>st;
        for(auto x:s)
        {
            if(x=='(')
            {
                st.push(x);
            }
            else if(x==')')
            {
                if(st.empty()!=true&&st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    c++;
                }
            }
        }
        while(st.empty()!=true)
        {
            c++;
            st.pop();
        }
        return c;
    }
};