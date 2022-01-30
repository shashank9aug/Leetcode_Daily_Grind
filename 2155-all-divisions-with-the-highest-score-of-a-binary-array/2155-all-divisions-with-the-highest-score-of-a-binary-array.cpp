
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int mx = 0;
        int o = accumulate(nums.begin(),nums.end(),0);
        int z = 0;
        for(int i=0;i<=n;i++){
            int score = o + z;
            if(score > mx){
                ans = {i};
                mx = score;
            }
            else if(score==mx){
                ans.push_back(i);
            }
            if(i<n){
                if(nums[i]==1){
                    o -= 1;
                }
                else{
                    z +=1;
                }
            }
        }
        return ans;
    }
};