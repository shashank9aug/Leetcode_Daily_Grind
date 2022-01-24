class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums){
            if(it<0){
                neg.push_back(it);
            }
            else{
                pos.push_back(it);
            }
        }
        int n = nums.size();
        int p = 0,e = 0,i=0;
        while(i<n){
            if(i%2==0 and p<pos.size()){
                ans.push_back(pos[p]);
                p+=1;
            } 
            if(i%2!=0 and e<neg.size()){
                ans.push_back(neg[e]);
                e+=1;
            }
            i+=1;
        }
        return ans;
    }
};