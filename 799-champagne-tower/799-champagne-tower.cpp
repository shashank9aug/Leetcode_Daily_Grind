class Solution {
public:
    double memo[101][101]; 
    double solve(int poured, int row, int glass)
    {
        
        if(row < 0 || glass > row || glass < 0)
        {
            return 0.00;
        }
        
        
        if(row == 0 && glass == 0)
        {
            return poured;
        }
        
        
        if(memo[row][glass] > -1)
        {
            return memo[row][glass];
        }
        
        
        double left = (solve(poured, row - 1, glass - 1) - 1) / 2;
        
        
        if(left < 0)
        {
            left = 0;
        }
        
        
        double right = (solve(poured, row - 1, glass) - 1) / 2;
        
       
        if(right < 0)
        {
            right = 0;
        }
        
        
        double total = left + right;
        
        return memo[row][glass] = total;
        
        
    }
    double champagneTower(int poured, int query_row, int query_glass) {
        memset(memo, -1, sizeof(memo));
        return min(1.00, solve(poured, query_row, query_glass));
    }
};