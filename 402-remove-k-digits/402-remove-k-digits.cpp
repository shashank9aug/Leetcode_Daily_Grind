class Solution {
public:
    string removeKdigits(string num, int k) {
        //When we can take a decision to delete any particular element.
        //if we see lower element in right we can delete that element
        stack<char>st;
        int i = 0;
        int n = num.size();
        for(auto ch : num){
            while(k>0 and !st.empty() and ch<st.top()){
                st.pop();
                k--;
            }       
            st.push(ch);
            i++;
        }
        while(!st.empty() and k>0){
            st.pop();
            k--;
        }
        
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        //append remaining element into the ans;
        ans += num.substr(i,num.length());
        
        //remove trailing zeroes 
        i = 0;
        while(i<ans.length()){
            if(ans[i]=='0'){
                i++;
            }
            else{
                break;
            }
        }
        //return substring after removing trealing zeroes
        return ans.substr(i).length() == 0 ? "0" : ans.substr(i);
    }
};