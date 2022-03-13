class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<size(nums);j++){
                //if found atleast one index , break and save
                if(abs(i-j)<=k and nums[j]==key){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};