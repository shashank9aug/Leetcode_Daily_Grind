class Solution {
private:
    void getSubsets(vector<vector<int>>&ans,vector<int>&nums,vector<int>temp,int idx,int n){
        ans.push_back(temp);
        for(int i=idx;i<n;i++){
            if(i>idx and nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            getSubsets(ans,nums,temp,i+1,n);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        getSubsets(ans,nums,{},0,n);
        return ans;
    }
};