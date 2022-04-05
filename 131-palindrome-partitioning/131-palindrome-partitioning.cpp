class Solution {
private:
    bool isPallindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void part(int idx,string s,vector<string>&temp,vector<vector<string>>&ans){
        //Base case :
        if(idx==size(s)){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<size(s);i++){
            if(isPallindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                part(i+1,s,temp,ans);
                temp.pop_back();
            }    
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        part(0,s,temp,ans);
        return ans;
    }
};