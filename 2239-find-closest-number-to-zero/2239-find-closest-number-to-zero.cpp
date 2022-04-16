class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        int number=nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<=mini)
            {
                mini=abs(nums[i]);
                number=nums[i];
            }
        }
        return number;
    }
};