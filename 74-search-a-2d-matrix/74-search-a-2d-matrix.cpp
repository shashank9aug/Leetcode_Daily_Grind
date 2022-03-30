class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int x = 0;
        int y = m-1;
        while(x<n and y>=0){
            // if()
            if(matrix[x][y]==target){
                return true;
            }
            else if(matrix[x][y]<target){
                x+=1;
            }
            else{
                y-=1;
            }
        }
        return false;
    }
};