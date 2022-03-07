class Solution {
private:
    void permute(int idx,string s,vector<string>&ans,string temp){
        //Base case :
        if(temp.size()==s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=idx;i<s.size();i++){
            if(isalpha(s[i])){
                //its alphabet : 
                temp.push_back(tolower(s[i]));
                permute(i+1,s,ans,temp);
                temp.pop_back();
            
                temp.push_back(toupper(s[i]));
                permute(i+1,s,ans,temp);
                temp.pop_back();
            }
            else{
                //it's digit : 
                temp.push_back(s[i]);
                permute(i+1,s,ans,temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp = "";
        permute(0,s,ans,temp);
        return ans;
    }
};