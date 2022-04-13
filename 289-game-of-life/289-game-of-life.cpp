class Solution
{
    public:
    void gameOfLife(vector<vector<int>>& board)
    {
        int rows = board.size();
        int cols = board[0].size();
        
        vector<vector<int>> neighbors = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        
        
        
        for (int r=0; r<rows; r++)
        {
            for (int c=0; c<cols; c++)
            {
                int live = 0;                
                for(auto n: neighbors)
                {
                    int rr = r+n[0];
                    int cc = c+n[1];
                    if (rr >= 0 && rr < rows && cc >=0 && cc < cols)
                        if(board[rr][cc] == 1)
                        {
                            live+=1;
                        }    
                        else if(board[rr][cc] == 3){  
                            live+=1;
                        }    
                        else{
                            live+=0;
                        }
                }
                if (board[r][c] == 0 && live == 3)
                    board[r][c] = 2;
                else if (board[r][c] == 1)
                    board[r][c] = (live < 2 || live > 3)? 3: 1;
            }
        }
        
        for (int r=0; r<rows; r++)
        {
            for (int c=0; c<cols; c++)
            {
                if (board[r][c] == 2)
                    board[r][c] = 1;
                if (board[r][c] == 3)
                    board[r][c] = 0;
            }
        }
    }
};