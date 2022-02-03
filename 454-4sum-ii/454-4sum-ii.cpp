class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        unordered_map<int,int>ump;
        
        for(auto it1:nums1){
            for(auto it2:nums2){
                ump[it2+it1]++;
            }
        }
        
        for(auto it3:nums3){
            for(auto it4:nums4){
                count += ump[-(it3+it4)];
            }
        }
        return count;
    }
};