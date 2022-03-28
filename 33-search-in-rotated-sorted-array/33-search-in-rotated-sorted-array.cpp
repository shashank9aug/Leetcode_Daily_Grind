class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int idx = findMinIdx(nums);
        while (l <= r) {
            int m = l + (r - l) / 2;
            int mid = (m + idx) % nums.size();
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target) 
            {
                l = m + 1;
            } 
            else
            {
                r = m - 1;
            }
        }
        return -1;
    }
private:
    int findMinIdx(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r && nums[l] > nums[r]) 
        {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[r]) 
            {
                l = m + 1;
            } 
            else
            {
                r = m;
            }
        }
        return l;
    }
};

