class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(auto num:nums){
            if(num%2==0) even.push_back(num);
            else odd.push_back(num);
        }
        vector<int>ans;
        for(auto e:even){
            ans.push_back(e);
        }
        for(auto o:odd){
            ans.push_back(o);
        }
        return ans;
    }
};