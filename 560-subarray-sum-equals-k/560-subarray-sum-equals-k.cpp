class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        int count = 0;
        int pref = 0;
        
        unordered_map<int,int>countPref;
        //empty subarray
        countPref[pref]++;
        for(int R=0;R<n;R++){
            // pref[R] - pref[L-1] = R
            // pref[L-1] = pref[R] - k
            pref += nums[R];
            int need = pref - k;
            count += countPref[need];
            countPref[pref]++;
        }
        return count;
    }
};