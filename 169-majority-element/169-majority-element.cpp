class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //if n/k > count of frequency needed then k-1 majority element possible. 
        int major = nums[0];
        int count = 1;
        for(auto it:nums){
            if(it!=major){
                count-=1;
            }
            else{
                count+=1;
            }
            if(count==0){
                major = it;
                count+=1;
            }
        }
        return major;
    }
};