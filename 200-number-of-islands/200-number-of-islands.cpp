class Solution {
private:
    void countIsland(vector<vector<char>>&grid,int n,int m,int i,int j){
        //base case :
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!='1'){
            return;
        }
        grid[i][j]='2';
        //go to each of the 4 sides of land
        countIsland(grid,n,m,i+1,j);
        countIsland(grid,n,m,i,j+1);
        countIsland(grid,n,m,i-1,j);
        countIsland(grid,n,m,i,j-1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int countIsLand = 0;
        int n = grid.size();
        int m = grid[0].size();
        //for each connecting land => reach till we get water around land
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]=='1'){
                    countIsland(grid,n,m,i,j);
                    countIsLand+=1;
                }
            }
        }
        return countIsLand;
    }
};