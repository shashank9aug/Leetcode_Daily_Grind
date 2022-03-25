class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int cost = 0;
        int n = size(costs);
        vector<int>ref(n,0);
        int idx = 0;
        for(auto &c:costs){
            ref[idx++] = c[1]-c[0];
            cost += c[0];
        }
        sort(ref.begin(),ref.end());
        for(int i=0;i<n/2;i++){
            cost += ref[i];
        }
        return cost;
    }
};