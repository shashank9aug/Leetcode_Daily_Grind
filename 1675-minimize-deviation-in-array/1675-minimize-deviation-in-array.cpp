class Solution {
public:
    //Deviation = max_ele - min_ele 
    int minimumDeviation(vector<int>& nums) {
        //convert all the element as even
        // and convert
        set<int>st;
        for(auto num:nums){
            //odd element * 2
            if(num%2==1){
                st.insert(num*2);
            }
            else{
                st.insert(num);
            }
        }
        
        int diff = INT_MAX;
        while(true){
            int maxVal = *st.rbegin();
            int minVal = *st.begin();
            int currDiff = maxVal - minVal;
            diff = min(diff,currDiff);
            if(maxVal%2==0){
                st.erase(maxVal);
                st.insert(maxVal/2);
            }
            else{
                //terminal case:
                return diff;
            }
        }
        
    }
};