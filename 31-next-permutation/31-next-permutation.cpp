class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size(), k , l;
        //find the break point from the back => it will be  start from 2nd last idx 
        for(k = n - 2; k>= 0; k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        //k will be our break point
        
        //if k < 0 => it's last permutation it's next will the first
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            //traverse from back and find someone whose greater than 
            for(l = n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};