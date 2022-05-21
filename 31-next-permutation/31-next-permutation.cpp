class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = size(nums) , k , l;
        //first break point in array
        for(k = n-2;k>=0;k--){
            if(nums[k]<nums[k+1]) 
                break;
        }
        //if k < 0 = > no break point
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        //find the idx of breakpoint another side element
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};