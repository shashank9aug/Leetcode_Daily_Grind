class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n = s.size();
        string res = "";
        for(int i=0;i<n;i++){
            res += s[i];
            if(res.size()==k){
                ans.push_back(res);
                res = "";
            }
            // cout<<res;
        }
        if(res.size()>0 and res.size()!=k){
            while(res.size()!=k){
                res+= fill;
            }
            ans.push_back(res);
        }
        return ans;
    }
};