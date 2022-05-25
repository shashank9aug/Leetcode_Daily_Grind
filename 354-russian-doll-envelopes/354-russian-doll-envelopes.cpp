class Solution {
    static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        int n = env.size();
        
        // sorting by height & if we encounter same height
        // sort by descending order of width
        sort(env.begin(), env.end(), cmp);
        
        // e.g. -> env => (3,8) (4,5) (2,1) (2,6) (7,8) (5,3) (5,7)
        // sorted version => (2,6) (2,1) (3,8) (4,5) (5,7) (5,3) (7,8)
        
        // Now, we only need to care about width
        // So, as of now we only need to look upon v[i][1]
        // [ 6, 1, 8, 5, 7, 3, 8 ]
        
        vector<int> lis;
        
        for(int i = 0;i<env.size();i++){
            int ele = env[i][1];
            
            int idx = lower_bound(lis.begin(), lis.end(), ele) - lis.begin();
            
            if(idx >= lis.size()) lis.push_back(ele);
            else lis[idx] = ele;
        }
        
        return lis.size();
    }
};