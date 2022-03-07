class Solution {
private:
    void findCombination(int start,int k,int n,vector<vector<int>>&ans,vector<int>&temp){
        //Base case : 
        if(temp.size()==k){
            if(n==0){
                ans.push_back(temp);
            }
            return;
        }
        
        //call for 1 to 9
        for(int i=start;i<=9;i++){
            temp.push_back(i);
            findCombination(i+1,k,n-i,ans,temp);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        findCombination(1,k,n,ans,temp);
        return ans;
    }
};