class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        stack<int>st;
        for(int i=0;i<size(s);i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()==true){
                    s[i]='*';
                }
                else{
                    st.pop();   
                }
            }
        }
        while(!st.empty()){
            s[st.top()]='*';
            st.pop();
        }
        //replace all the 
        for(auto c:s){
            if(c!='*'){
                ans+=c;
            }
        }
        return ans;
    }
};