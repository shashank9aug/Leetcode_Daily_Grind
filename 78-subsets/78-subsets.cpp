class Solution {
private:
    void storeSubset(vector<int>num,int n,vector<vector<int>>&ans,vector<int>temp,int idx){
        ans.push_back(temp);
        for(int i=idx;i<n;i++){
            temp.push_back(num[i]);
            storeSubset(num,n,ans,temp,i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        storeSubset(nums,n,ans,{},0);
        return ans;
    }
};