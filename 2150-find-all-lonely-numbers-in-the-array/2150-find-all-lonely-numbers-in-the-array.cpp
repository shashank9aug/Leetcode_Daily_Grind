class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mpp;
        for(auto num:nums){
            mpp[num]++;
        }
        vector<int>ans;
        for(auto num:nums){
            if(mpp[num]==1){
                if(mpp.find(num-1)==mpp.end() and mpp.find(num+1)==mpp.end()){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};