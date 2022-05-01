class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        unordered_map<int,int> u;
        
        int ans = INT_MAX, n=c.size();
        
        for(int i =0 ; i<n ; i++){
            if(u.find(c[i])==u.end())
            {
                u[c[i]] = i;
            }else{
                ans = min(ans , i - u[c[i]] + 1);
                u[c[i]]= i;
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};