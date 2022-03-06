class Solution {
public:
    int countOrders(int n) {
        long long dp[501];
        int mod = 1000000007;
        dp[1] = 1L;
        dp[2] = 6L;
        for(int i=3;i<=n;i++){
            int oddNo = 2*i-1;
            int permutations = oddNo*(oddNo+1)/2;
            dp[i] = (dp[i-1]*(permutations))%mod;
        }
        return dp[n];
    }
};