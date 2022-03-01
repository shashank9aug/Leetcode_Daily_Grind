class Solution {

private:
    int calCost(vector<int>&cost,int i){
        if(i>=cost.size()){
            return 0;
        }
        if(memo[i]!=-1){
            return memo[i];
        }
        return memo[i] = min(calCost(cost,i+1), calCost(cost,i+2)) + cost[i];
    }
public:
    int memo[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        memset(memo,-1,sizeof(memo));
        return min(calCost(cost,0),calCost(cost,1));
    }
};