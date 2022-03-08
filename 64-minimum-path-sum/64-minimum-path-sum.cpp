class Solution {
private:
    int minPath(int i,int j,int n,int m,vector<vector<int>>&grid){
        //Base case :
        if(i>=n or j>=m){
            return memo[i][j] = INT_MAX;
        }
        if(i==n-1 and j==m-1){
            return memo[i][j] = grid[i][j];
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        return memo[i][j] = grid[i][j] + min(minPath(i+1,j,n,m,grid),minPath(i,j+1,n,m,grid));
    }
public:
    int memo[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        memset(memo,-1,sizeof(memo));
        return minPath(0,0,n,m,grid);
    }
};