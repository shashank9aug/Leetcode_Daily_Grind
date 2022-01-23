class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>mn and nums[i]<mx)
            {
                count+=1;
            }
        }
        return count;
    }
};