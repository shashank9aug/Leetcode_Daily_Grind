class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int i = 0;
        int n = nums.size();
        while(i<n){
            string temp = "";
            int start = nums[i];
            while(i+1<nums.size() && nums[i]+1==nums[i+1]){
                i++;                
            }
            if(start!=nums[i]){
                temp+=to_string(start)+"->"+to_string(nums[i]);
            }
            else{
                temp+=to_string(start);
            }
            ans.push_back(temp);
            i+=1;
        }
        return ans;
    }
};