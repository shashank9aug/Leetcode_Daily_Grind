class Solution {
private:
    void getSubsequence(int idx,vector<int>&nums,vector<int>&temp,set<vector<int>>&se){
        //Base case : 
        if(temp.size()>=2){
            se.insert(temp);
            // return;
        }
        
        for(int i=idx;i<size(nums);i++){
            if(temp.size()==0 || temp[temp.size()-1]<=nums[i]){
                temp.push_back(nums[i]);
                getSubsequence(i+1,nums,temp,se);
                temp.pop_back();    
            }
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>se;
        vector<int>temp;
        getSubsequence(0,nums,temp,se);
        // for(auto it:se){
        //     for(auto v:it){
        //         cout<<v<<",";
        //     }
        //     cout<<endl;
        // }
        vector<vector<int>>ans(se.begin(),se.end());
        return ans;
    }
};