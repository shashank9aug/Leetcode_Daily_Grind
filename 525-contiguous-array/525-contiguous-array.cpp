class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        
        // //make all 0-> -1 for making sum==0
        // for(int &it:nums){
        //     if(it==0){
        //         it=-1;
        //     }
        // }
        // for(int i=0;i<n;++i){
        //     if(nums[i]==0){
        //         nums[i]=-1;
        //     }
        // }
        
        //create prefix array sum
        // vector<int>pre;
        // pre.push_back(0);
        // for(auto it:nums){
        //     pre.push_back(pre.back()+it);
        // }
        
        //for making pre(r) - pre(l-1) = sum of subarray = 0
        //so, pre(r) = pre(l-1) 
        unordered_map<int,int>ump;
        ump[0] = 0;
        int ans = 0;
        int pref = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                pref += -1;
            }
            else{
                pref += 1;
            }
            auto it = ump.find(pref);
            if(it!=ump.end()){
                ans = max(ans,i + 1 - ump[pref]);
            }
            else{
                ump[pref] = i + 1;
            }
        }
        return ans;
    }
};