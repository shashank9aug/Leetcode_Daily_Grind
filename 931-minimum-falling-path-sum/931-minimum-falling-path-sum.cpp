class Solution {
public:
    
    int rec(vector<vector<int>>& matrix,int i, int j,vector<vector<int>>&dp){
        if(j<0 || j>matrix[0].size()-1){
            return INT_MAX;
        }
        if(i>matrix.size()-1){
            return 0;
        }
        if(dp[i][j]!=INT_MIN){
            return dp[i][j];
        }
       
       return dp[i][j]= matrix[i][j] + min(rec(matrix,i+1,j,dp),min(rec(matrix,i+1,j+1,dp),rec(matrix,i+1,j-1,dp)));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int miner=INT_MAX;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),INT_MIN));
        for(int i=0;i<matrix[0].size();i++){
            miner=min(miner,rec(matrix,0,i,dp));
        }
        return miner;
    }
};