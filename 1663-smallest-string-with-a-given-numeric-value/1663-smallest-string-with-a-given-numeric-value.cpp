class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        int sum = n;
        for(int i = n-1;i>=0;){
            if(sum==k){
                return ans;
            }
            if(ans[i]=='z'){
                i--;
            }
            else{
                ans[i]+=1;
                sum+=1;
            }
        }
        return "";
    }
};