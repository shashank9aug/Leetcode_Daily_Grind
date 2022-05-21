class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        bool flag = true;
        int row = size(mat), col = size(mat[0]);
        for(int i=0;i<row;i++){
            if(mat[i][0]==0){
                flag = false;
            }
            for(int j=1;j<col;j++){
                if(mat[i][j]==0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j] = 0;
                }
            }
            if(flag==false){
                mat[i][0]=0;
            }
        }        
    }
};