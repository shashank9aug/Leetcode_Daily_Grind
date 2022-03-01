class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=1;i<=n;i++){
            int subAns = 0;
            int cal = i;
            while(cal>0){
                subAns += (cal%2);
                cal=cal>>1;
            }
            ans[i]=subAns;
        }
        return ans;
    }
};