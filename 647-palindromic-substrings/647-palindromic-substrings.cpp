class Solution {
private:
    bool isPallindrome(string &s,int i,int j,vector<vector<int>>&dp){
        //Base case :
        if(i>j){
            return 1;
        }

        //look up :
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        //look for pallindrome :
        if(s[i]!=s[j]){
            return 0;
        }
        return dp[i][j] = isPallindrome(s,i+1,j-1,dp);
    }    
public:
    int countSubstrings(string s) {
        int ans=0;
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(isPallindrome(s,i,j,dp)==true){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};