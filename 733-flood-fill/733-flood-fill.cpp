class Solution {
private:
    void fill(int sr,int sc,int oldcolor,int newcolor,vector<vector<int>>&image){
        //Base cases: boundary condition and image[i][j] has new color
        if(sr<0 or sc<0 or sr>=image.size() or sc>=image[0].size() or image[sr][sc]!=oldcolor){
            return;
        }
        //color the current cell.
        image[sr][sc]=newcolor;
        
        //call for all the 4 directions.
        fill(sr+1,sc,oldcolor,newcolor,image);
        fill(sr-1,sc,oldcolor,newcolor,image);
        fill(sr,sc+1,oldcolor,newcolor,image);
        fill(sr,sc-1,oldcolor,newcolor,image);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor){
            return image;
        }
        fill(sr,sc,image[sr][sc],newColor,image);
        return image;
    }
};