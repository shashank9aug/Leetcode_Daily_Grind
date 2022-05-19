class Solution {
private:
    void combination(int idx,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&ds){
        //Base case :
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        //pick up the element : 
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            combination(idx,arr,target-arr[idx],ans,ds);
            ds.pop_back();
        }
        combination(idx+1,arr,target,ans,ds);        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combination(0,candidates,target,ans,ds);
        return ans;
    }
};