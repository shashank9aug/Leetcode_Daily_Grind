class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = size(nums);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};