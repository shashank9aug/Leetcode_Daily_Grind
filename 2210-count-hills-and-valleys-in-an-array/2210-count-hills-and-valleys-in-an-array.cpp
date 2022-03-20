class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        int prev = nums[0];
        for(int i=1;i<size(nums)-1;i++){
            if((nums[i] > nums[i+1] && nums[i] > prev || (nums[i] < nums[i+1] && nums[i] < prev))){
                ans += 1;
            }
            if(nums[i]!=nums[i+1]){
                prev = nums[i];
            }
            
        }
        return ans;
    }
};