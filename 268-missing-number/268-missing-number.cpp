class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = size(nums);
        vector<int>count(n+1,0);
        for(auto num:nums){
            count[num]+=1;
        }
        int ans = 0;
        for(int i=0;i<=n;i++){
            if(count[i]==0){
                ans = i;
            }
        }
        return ans;
    }
};