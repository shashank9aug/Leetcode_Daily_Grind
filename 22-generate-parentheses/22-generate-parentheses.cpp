class Solution {
private:
    void generate(int n,int open,int close,string &temp,vector<string>&ans){
        //base case:
        if(temp.size()==2*n){
            ans.push_back(temp);
            return;
        }
        
        if(open<n){
            temp.push_back('(');
            generate(n,open+1,close,temp,ans);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            generate(n,open,close+1,temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp = "";
        generate(n,0,0,temp,ans);
        return ans;
    }
};