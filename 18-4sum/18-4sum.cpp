class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(begin(nums),end(nums));
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target_2 = target - nums[i] - nums[j];
                int left = j + 1 , right = n - 1;
                while(left<right){
                    int twoSum = nums[left] + nums[right];
                    if(twoSum<target_2){
                        left++;
                    }
                    else if(twoSum > target_2){
                        right--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int num3 = nums[left] , num4 = nums[right];
                        //process duplicates of num3
                        while(left<right && nums[left]==num3) ++left;
                        //process duplicates of num4
                        while(left<right && nums[right]==num4) --right;
                    }
                }
                while(j+1 < n and nums[j+1]==nums[j]) ++j;
            }
            while(i+1 < n and nums[i+1]==nums[i]) ++i;
        }
        return ans;
    }
};