class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = 0;
        int e = size(nums)-1;
        while(s<e){
            int mid = s + (e-s)/2;
            int count = 0;
            for(auto num:nums){
                if(num<=mid){
                    count+=1;
                }
            }
            if(count<=mid){
                s = mid+1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }
};