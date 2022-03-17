class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack<int>st;
        
        for(auto c:s){
            if(c=='('){
                st.push(score);
                score = 0;
            }
            else{
                int t = st.top();
                st.pop();
                score = t + max(score*2, 1);
            }
        }
        return score;
    }
};