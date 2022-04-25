class Solution {
private:
    int rec(vector<int>&nums1,vector<int>&nums2,int i,int j)
    {
        if(i==0 or j==0){
            return 0;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        
        if(nums1[i-1]==nums2[j-1]){
            return memo[i][j] = 1+rec(nums1,nums2,i-1,j-1);
        }
        return memo[i][j] = max(rec(nums1,nums2,i-1,j) , rec(nums1,nums2,i,j-1));
    }
public:
    int memo[501][501];
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        memset(memo,-1,sizeof(memo));
        return rec(nums1,nums2,size(nums1),size(nums2));
    }
};