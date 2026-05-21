class Solution {
public:
    bool findbananas(vector<int> &piles,int mid,int h,int n)
    {
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            c=c+(long long int)ceil((double)piles[i]/(double)mid);
        }
        return c<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=piles[0];
        for(int i=0;i<n;i++)
        {
            if(piles[i]>max)
            {
                max=piles[i];
            }
        }
        if(n==h) return max;
        int k=0;
        int start=1;
        int end=max;
        while(start<=end)
        {
            int mid=(start+((end-start)/2));
            if(findbananas(piles,mid,h,n)==true)
            {
                k=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return k;
    }
};