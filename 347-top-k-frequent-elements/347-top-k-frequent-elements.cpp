class Solution {
public:
    bool static cmp(pair<int,int>&p1,pair<int,int>&p2){
        return p1.second > p2.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        //count nums[i] using map 
        for(auto it:nums){
            mp[it]++;
        }
        
        //store as pair to sort the frequency of nums[i] in descending order
        vector<pair<int,int>>vp;                 
        for(auto it:mp){
            vp.push_back({it.first,it.second});
        }
        
        //sort frequecy in descending order 
        sort(vp.begin(),vp.end(),cmp);

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vp[i].first);        
        }
        return ans;
    }
};