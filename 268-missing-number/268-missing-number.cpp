class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = 0, i = 0;
	    for (i = 0; i < size(nums); i++) {
		    x = x ^ i ^ nums[i];
	    }
        return x ^ i;
    }
};