class Solution {
int dp[501][501];    
private:
    int solve(int i,int j,string &s1,string &s2){
        //Base case :
        if(i==s1.length() or j==s2.length()){  //both strings are matched
            //delete or insert
            return dp[i][j] = max(s2.length()-j,s1.length()-i);
        }
        //Look-UP :
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        //Rec case :
        int ans;
        if(s1[i]==s2[j]){
            return dp[i][j] = solve(i+1,j+1,s1,s2);
        }
        else{        
            //insert
            int op1 = 1 + solve(i,j+1,s1,s2);

            //remove
            int op2 = 1 + solve(i+1,j,s1,s2);

            //delete
            int op3 = 1 + solve(i+1,j+1,s1,s2);
            ans = min({op1,op2,op3});
        }
        return dp[i][j] = ans;
    }    
public:
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,word1,word2);
    }
};