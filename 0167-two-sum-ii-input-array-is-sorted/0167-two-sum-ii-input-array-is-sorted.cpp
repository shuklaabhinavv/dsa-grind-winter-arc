class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            int currsum=numbers[i]+numbers[j];
            if(currsum==target)
            {
                return {(i+1),(j+1)};
            }
            else if(currsum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {0,0};
    }
};