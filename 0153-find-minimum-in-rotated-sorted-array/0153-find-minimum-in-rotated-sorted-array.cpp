class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            // If array is already sorted
            if (nums[l] <= nums[r])
                return nums[l];

            int mid = l + (r - l) / 2;
            int prev = nums[(mid - 1 + n) % n];
            int next = nums[(mid + 1) % n];

            if (nums[mid] <= prev && nums[mid] <= next)
                return nums[mid];

            if (nums[mid] >= nums[l])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
};
