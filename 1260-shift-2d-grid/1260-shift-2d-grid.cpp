class Solution {
public:
     vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) { 
        int m=grid.size();
        int n=grid[0].size();
   
        vector<vector<int>> mat(m , vector<int>(n));        
        for(int i=0;i<k;i++)
        {
            for(int a=0;a<m;a++)
            {
                for(int b=0;b<n;b++)
                {
                    if(b!=n-1)
                    {
                        mat[a][b+1]=grid[a][b];
                    }
                }
            }   
            mat[0][0]=grid[m-1][n-1];
            
            for(int a=0;a<m-1;a++)
            {
                mat[a+1][0]=grid[a][n-1];
            }
            
            grid=mat;
        }
        return grid;
    }
};