class Solution {
private:
    int lcs(int n,int m,string &str1,string &str2,vector<vector<int>>&dp){
        //Base case:
        if(n==0 or m==0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(str1[n-1]==str2[m-1]){
            return dp[n][m] = 1 + lcs(n-1,m-1,str1,str2,dp); 
        }
        return dp[n][m] = max(lcs(n-1,m,str1,str2,dp),lcs(n,m-1,str1,str2,dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        return lcs(text1.size(),text2.size(),text1,text2,dp);
    }
};