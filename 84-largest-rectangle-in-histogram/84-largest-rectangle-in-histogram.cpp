class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //create left and right greatest element towards left and right
        int len = heights.size();
        vector<int>left(len,-1);
        vector<int>right(len,len);
        
        stack<int>st;
        
        for(int i=0;i<len;i++){
            while(!st.empty() and heights[st.top()] > heights[i]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }    
        
        st.empty();
        for(int i=len-1;i>=0;i--){
            while(!st.empty() and heights[st.top()] > heights[i]){
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }    
        
        
        //calculate max area histogram
        int mxArea = 0;
        for(int i=0;i<len;i++){
            mxArea = max((right[i]-left[i] - 1) * heights[i],mxArea);
        }
        return mxArea;
    }
};