class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mpp;
        for(auto &it : tasks){
            mpp[it]++;
        }
        int ans = 0;
        for(auto &it : mpp){
            int val = it.second;
            if(val == 1)
                return -1;
            if(val%3 == 0){
                ans+= val/3;
            }
            if(val%3!=0){
                ans+= val/3 + 1;
            }
        }
        return ans;
    }
};