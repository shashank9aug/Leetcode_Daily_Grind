class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = size(nums) - 1;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] == target) 
                return mid;

            // the following is the same as problem I
            if (nums[start] <= nums[mid]) {
                if (nums[start] <= target && target < nums[mid]) {
                    end = mid - 1;
                } 
                else
                {
                    start = mid + 1;
                }
            } 
            else
            {
                if (nums[mid] < target && target <= nums[end]) {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }    
};