class Solution {
public:
    string removeDuplicates(string s, int k) {        
        stack<pair<char,int>> st;
        for(auto c:s){
            if(st.empty() || st.top().first != c){
                st.push({c,1});
            }    
            else{
                // auto prev = st.top();
                pair<char,int> prev = st.top();
                st.pop();
                st.push({c, prev.second+1});
            }
            if(st.top().second==k){
                st.pop();
            }    
        }
        
        string ans = "";
        while(!st.empty()){
            // auto cur = st.top();
            pair<char,int>cur = st.top();
            st.pop();
            while(cur.second--){
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};