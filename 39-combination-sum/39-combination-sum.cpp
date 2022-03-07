class Solution {
private:
    void findCombination(vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int target,int idx){
        //Base case:
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        //rec call
        //pick up the element : 
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            //we are picking up the same element many times according to question
            findCombination(arr,ds,ans,target-arr[idx],idx);
            ds.pop_back();
        }
        //not pickup the element
        findCombination(arr,ds,ans,target,idx+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(candidates,ds,ans,target,0);
        return ans;
    }
};