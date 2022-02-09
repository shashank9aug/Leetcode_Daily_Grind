```cpp
class Solution {
public:
int findPairs(vector<int>& nums, int k) {
sort(nums.begin(),nums.end());
int ans = 0;
int n = nums.size();
int i = 0, j = 1;
while(i<n && j<n){
if(nums[j] - nums[i] == k && i!=j){
while(i+1 < n && nums[i+1] == nums[i])
i++;
i++;
while(j+1<n && nums[j+1] == nums[j])
j++;
j++;
ans++;
}
else if(nums[j] - nums[i] > k){
i++;
}
else{
j++;
}
}
return ans;
}
```