class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0;
        int n = gas.size();
        
        //Edge case :
        int tgas = 0;
        int tcost = 0;
        for(int i=0;i<n;i++){
            tgas += gas[i];
            tcost += cost[i];
        }
        
        if(tgas < tcost){
            return -1;
        }
        // vector<int>diff(n);
        // for(int i=0;i<n;i++){
        //     diff[i] = gas[i] - cost[i];
        // }
        
        int rgas = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            rgas += gas[i] - cost[i]; 
            if(rgas < 0){
                start = i + 1;
                rgas = 0;
            }
        }
        return start;
    }
};