class Solution {
public:
    int minDeletion(vector<int>& nums) {
		int size = nums.size();
		int count = 0;
		for(int i=0;i< size-1;)
		{
			if(nums[i] == nums[i+1])
			{
				i++;
				count++;
			}
			else
			{
				i += 2;
			}
		}
		if(size % 2 == 0  and count % 2 != 0)
		{
			count++;
		}
		if(size % 2 == 1 and count % 2 == 0)
		{
			count++;
		}
		return count;
	}
};