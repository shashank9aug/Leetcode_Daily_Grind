class Solution {
private:    
    int lenLCS(string x,string y,int n,int m){
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        {
            if(i==0 or j==0) t[i][j]=0;
            else if(x[i-1]==y[j-1]) t[i][j]=t[i-1][j-1] + 1;
            else t[i][j]=max(t[i-1][j],t[i][j-1]);
        }    
        return t[n][m];
    }
public:
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        return lenLCS(s,s1,s.length(),s1.length());
    }
};