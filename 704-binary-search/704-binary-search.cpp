class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = size(nums);
        int start = 0;
        int end = n-1;
        int idx = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                idx = mid;
                break;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
        }
        return idx;
    }
};