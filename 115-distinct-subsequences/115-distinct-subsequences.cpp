class Solution {   
    int dp[1001][1001];
private:
    int findSeq(int n,int m,string &s,string &t){
        //Base case :
        if(m==t.size()){
            return 1;
        }
        if(n==s.size()){
            return 0; 
        }
        
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        
        if(s[n]==t[m]){
            return dp[n][m] = findSeq(n+1,m+1,s,t) + findSeq(n+1,m,s,t);
        }
        return dp[n][m] = findSeq(n+1,m,s,t);
    }    
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        memset(dp,-1,sizeof(dp));
        return findSeq(0,0,s,t);
    }
};