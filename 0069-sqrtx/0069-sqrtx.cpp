class Solution {
public:
    int mySqrt(int x) 
    {
        if(x==0||x==1)
        {
            return x;
        }
        int l=1;
        int e=x;
        while(l<=e)
        {
            int mid=(l+(e-l)/2);
            if((1LL*mid*mid)==x)
            {
                return mid;
            }
            else if((1LL*mid*mid)>x)
            {
                e=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return floor(e);
    }
};