class Solution {
public:
    int minSteps(string s, string t) {
        // vector<int> cnt(26); 
        map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        } 
        for(auto c:t){
            mpp[c]--; 
        }    
        int ans=0; 
        for(auto it:mpp){
            ans+=abs(it.second);
        }    
        return ans; 
    }
};