class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int count = 0;
        int i = 0, j = 1;
        while(i<n and j<n){
            int diff = nums[j]-nums[i];
            if(diff==k and i!=j){
                //skip the pairs
                while(i+1<n and nums[i+1]==nums[i]){
                    i++;    
                }
                i++;
                while(j+1<n and nums[j+1]==nums[j]){
                    j++;
                }
                count++;
                j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
                // break;
            }
        }
        return count;
    }
};